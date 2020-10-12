#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main()
{
    /*Mat rgb, gry, cny;

    rgb = imread("C:/Users/lparadylo/source/repos/ConsoleApplication3/x64/Debug/FLIR0838.JPG");
    cvtColor(rgb, gry, COLOR_BGR2GRAY);
    imshow("EX1", gry);
    Canny(gry, cny, 10, 100, 3, true);
    imshow("EX2", cny);
    cv::waitKey(0);*/

    VideoCapture cap;
    cap.open(0);
    Mat frame;
    Mat frame2;
    Mat frame3;
    for (;;)
    {
        cap >> frame;
        cvtColor(frame, frame2, COLOR_BGR2GRAY);
        Canny(frame, frame3, 10, 100, 3, true);
        if (!cap.isOpened()) break;
        imshow("ex", frame2);
        imshow("ex1", frame3);
        if (cv::waitKey(33) >= 0) break;
    }
    


    return 0;
}