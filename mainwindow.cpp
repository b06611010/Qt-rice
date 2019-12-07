#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;
using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    img=cv::imread("rice.jpg");
//    img=cv::imread("bonus.jpg");
    binary=img.clone();
    erosion=img.clone();
    QImage abc =cvMat2QImage(img);
    w=ui->label_picture->width();
    h=ui->label_picture->height();
    ui->label_picture->setPixmap(QPixmap::fromImage(cvMat2QImage(img).scaled(w,h,Qt::KeepAspectRatio)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_binary_clicked()
{
    binary=img.clone();
    for (int i=0;i<img.cols;i++)
    {
        for (int j=0;j<img.rows;j++)
        {
            int blue = img.at<cv::Vec3b>(j,i).val[0];
            int green = img.at<cv::Vec3b>(j,i).val[1];
            int red = img.at<cv::Vec3b>(j,i).val[2];

            if((blue<110)||(green<110)||(red<110))
            {
                binary.at<cv::Vec3b>(j,i).val[0]=255;
                binary.at<cv::Vec3b>(j,i).val[1]=255;
                binary.at<cv::Vec3b>(j,i).val[2]=255;
            }
            else
            {
                binary.at<cv::Vec3b>(j,i).val[0]=0;
                binary.at<cv::Vec3b>(j,i).val[1]=0;
                binary.at<cv::Vec3b>(j,i).val[2]=0;
            }
        }
    }
    ui->label_picture->setPixmap(QPixmap::fromImage(cvMat2QImage(binary).scaled(w,h,Qt::KeepAspectRatio)));

}

void MainWindow::on_pb_erosion_clicked()
{
    erosion=binary.clone();
    cv::Mat element = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(18,18),cv::Point(-1,-1));
    cv::erode( binary, erosion, element);
    ui->label_picture->setPixmap(QPixmap::fromImage(cvMat2QImage(erosion).scaled(w,h,Qt::KeepAspectRatio)));

}

void MainWindow::on_pb_origin_clicked()
{
    ui->label_picture->setPixmap(QPixmap::fromImage(cvMat2QImage(img).scaled(w,h,Qt::KeepAspectRatio)));

}

void MainWindow::on_pb_count_clicked()
{
    cvtColor(erosion,gray,COLOR_BGR2GRAY);
    vector<vector<Point> > contours;
    vector<Vec4i> hierarchy;

    findContours( gray, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE,Point(0,0));

    ui->label_picture->setPixmap(QPixmap::fromImage(cvMat2QImage(gray).scaled(w,h,Qt::KeepAspectRatio)));
    imshow("final",gray);
    QString number = QString::number(contours.size());

    ui->label_num->setText(number);
}
