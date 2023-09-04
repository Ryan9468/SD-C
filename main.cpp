#include "main.h"
using namespace apps;
int main() {
    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
    char response;
    char response2;
    cout << "Would you like to use the calculator? [Y] or [N]:";
    cin >> response;
    if(response == 'Y' || response == 'y'){
        calculator();
    }
    cout <<"\n" <<  "Would you like to use the Metric Converter? [Y] or [N]:";
    cin >> response2;
    cout << endl;
    if(response2 == 'Y' || response2 == 'y'){
        metric();
    };
    chrono::high_resolution_clock::time_point stop = chrono::high_resolution_clock::now();
    chrono::duration<double> time_span = duration_cast<chrono::duration<double>>(stop - start);
    cout << "You've used this program for: " << time_span << "\n";
    return 0;
}