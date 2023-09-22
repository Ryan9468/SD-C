#ifndef SD_C_MAIN_H
#define SD_C_MAIN_H
#include <iostream>
#include <string>
#include <cstring>
#include <chrono>
#include <cmath>
using namespace std;
namespace apps {
    enum alpha : int {
        A=0, B=2, C=4
    };
    // Struct test
    struct ello{
        int x;
        int y;
    };

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

    // CS Class Examples
    void String_Concatination();

};
#endif //SD_C_MAIN_H
