#include "main.h"
void apps::calculator() {
    char confirm;
    cout << "\n" << "Are you sure? [Y] or [y]" << "\n";
    cin >> confirm;
    while (confirm == 'y' || confirm == 'Y') {
        double first, second;
        char imp;
        cout << "Pick one number for calculator:" << endl;
        cin >> first;
        while (!cin.good()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Doesn't look like a number, try again: " <<
                 "\n" << "Pick one number for calculator:" << endl;
            cin >> first;
        }
        cout << "Pick second number for calculator:" << endl;
        cin >> second;
        while (!cin.good()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Doesn't look like a number, try again: " <<
                 "\n" << "Pick second number for calculator:" << endl;
            cin >> second;
        }
        cout << "Choose an operation for your numbers [D, M, S, A, E] or [Q] to quit: ";
        cin >> imp;
        if (cin.fail()) {
            return;
        }

        if (imp == 'D' || imp == 'd') {
            divy(first, second);
        };
        if (imp == 'M' || imp == 'm') {
            multiply(first, second);
        };
        if (imp == 'S' || imp == 's') {
            sub(first, second);
        };
        if (imp == 'A' || imp == 'a') {
            add(first, second);
        };
        if (imp == 'E' || imp == 'e') {
            exp(first, second);
        };
        if (imp == 'Q' || imp == 'q') {
            return;
        }
        cout << "Would you like to keep using the calculator? [Y] or [y]" << "\n";
        cin >> confirm;
    }
}