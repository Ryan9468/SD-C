#include "main.h"
void apps::multiply(double first_num, double second_num){
    double result = first_num * second_num;
    cout << result << endl;
};
void apps::divy(double first_num, double second_num){
    double result = first_num / second_num;
    cout << result << endl;
};
void apps::sub(double first_num, double second_num){
    double result = first_num - second_num;
    cout << result << endl;
};
void apps::add(double first_num, double second_num){
    double result = first_num + second_num;
    cout << result << endl;
};
void apps::exp(double first_num, double second_num){
    double result = pow(first_num,second_num);
    cout << result << endl;
}