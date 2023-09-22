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
void apps::metric(){
    char inp;
    cout << "Ft to Meter [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;
    if(inp == 'Y' || inp == 'y'){
        double ft;
        cout << "Select the ft to turn into meters:";
        cin >> ft;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        meter(ft);
        cout << endl;
    }
    cout << "Cm to Inches [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double metric_cm;
        cout << "Select the cm to turn into inches:";
        cin >> metric_cm;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        in(metric_cm);
        cout << endl;
    }
    cout << "Meters to feet [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double metric_meter;
        cout << "Select the Meters to convert to feet:";
        cin >> metric_meter;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        ft(metric_meter);
        cout << endl;
    }
    cout << "In to cm [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double imper_in;
        cout << "Select the inches to convert to cm:";
        cin >> imper_in;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        cm(imper_in);
        cout << endl;
    }
    cout << "Kilos to lbs [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double kilo;
        cout << "Select the kilos to convert to lbs:";
        cin >> kilo;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        lb(kilo);
        cout << endl;
    }
    cout << "Pounds to kilos [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double pound;
        cout << "Select the lbs to convert to kilos:";
        cin >> pound;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        kilos(pound);
        cout << endl;
    }
    cout << "Farenheit to Celcius [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double far;
        cout << "Select the Farenheit to convert to Celcius:";
        cin >> far;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        celc(far);
        cout << endl;
    }
    cout << "Celcius to Farenheit [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double celcius;
        cout << "Select the Celcius to convert to Farenheit:";
        cin >> celcius;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        faren(celcius);
        cout << endl;
    }
    cout << "Celcius to Kelvin [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double celcius;
        cout << "Select the Celcius to convert to kelvin:";
        cin >> celcius;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        kel_c(celcius);
        cout << endl;
    }
    cout << "Farenheit to Kelvin [Y] or [N]:";
    cin >> inp;
    if(cin.fail()){
        cout << "Failed Input, Quitting...";
        return;
    }
    cout << endl;

    if(inp == 'Y' || inp == 'y'){
        double far;
        cout << "Select the Farenheit to convert to kelvin:";
        cin >> far;
        if(cin.fail()){
            cout << "Failed Input, Quitting...";
            return;
        }
        cout << endl;
        kel_f(far);
        cout << endl;
    }
    return;
}

