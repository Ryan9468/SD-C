#ifndef SD_C_MAIN_H
#define SD_C_MAIN_H
#include <bits/stdc++.h>
#include "opencv2/core/version.hpp"
#include "opencv2/core/cvdef.h"
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
using namespace std;
using namespace cv;
namespace apps {
    // calculator app functions
    void multiply(double first_num, double second_num);

    void divy(double first_num, double second_num);

    void sub(double first_num, double second_num);

    void add(double first_num, double second_num);

    void exp(double first_num, double second_num);

    void calculator();

    // Metric app functions
    void ft(double metric_meter);

    void in(double metric_cm);

    void meter(double imper_ft);

    void cm(double imper_in);

    void lb(double kilo);

    void kilos(double pound);

    void faren(double celcius);

    void celc(double far);

    void kel_c(double cel);

    void kel_f(double far);

    void metric();

    // Video converter
    int Video();
};
#endif //SD_C_MAIN_H
