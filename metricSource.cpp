#include "main.h"
void apps::ft(double metric_meter){
    double ft = metric_meter * 3.28084;
    cout << metric_meter;
}
void apps::in(double metric_cm){
    double in = metric_cm / 2.54;
    cout << in;
}
void apps::meter(double imper_ft){
    double meter = imper_ft * 0.304;
    cout << meter;
}
void apps::cm(double imper_in){
    double cm = imper_in * 2.54;
    cout << cm;
}
void apps::lb(double kilo){
    double lb = kilo * 2.205;
    cout << lb;
}
void apps::kilos(double pound){
    double kilos = pound / 2.205;
    cout << kilos;
}
void apps::faren(double celcius){
    double farenheit;
    double value_holder_far = 9/5;
    celcius = celcius * value_holder_far;
    farenheit = celcius + 32;
    cout << farenheit;
}
void apps::celc(double far){
    double celci;
    double value_holder_celc = 5/9;
    far = far - 32;
    celci = far * (value_holder_celc);
    cout << celci;
}
void apps::kel_c(double cel){
    double kelvin = cel + 273.15;
    cout << kelvin;
}
void apps::kel_f(double far){
    double celci;
    double value_holder_celc = 5/9;
    double kelvin;
    far = far - 32;
    celci = far * (value_holder_celc);
    kelvin = celci + 273.15;
    cout << kelvin;
}


