#include "main.h"
#include "Test_New_Main.h"
using namespace apps;
int main() {
    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
    char response, response2, response3;
    cout << "Would you like to use the calculator? [Y] or [N]:\n";
    cin >> response;
    if(response == 'Y' || response == 'y'){
        calculator();
    }
    cout <<"\n" <<  "Would you like to use the Metric Converter? [Y] or [N]:\n";
    cin >> response2;
    cout << endl;
    if(response2 == 'Y' || response2 == 'y'){
        metric();
    };
    cout <<  "Would you like to use the String Concatinator? [Y] or [N]:\n";
    cin >> response2;
    cout << endl;
    if(response2 == 'Y' || response2 == 'y'){
        String_Concatination();
    };
    cout << "Would you like to play a game?" << " [Y] or [N]:\n";
    cin >> response3;
    if(response3 == 'Y' || response3 == 'y'){
        int x1, y1, x2, y2;
        Player Player1, Player2;
        cout << "Pick player 1's move for the X coordinate:\n";
        cin >> x1;
        cout << "Pick player 1's move for the Y coordinate:\n";
        cin >> y1;
        cout << "Pick player 2's move for X coordinate:\n";
        cin >> x2;
        cout << "Pick player 2's move for Y coordinate:\n";
        cin >> y2;
        cout << "Player 1's move was:\n";
        Player1.Move(x1,y1);
        cout << "Player 2's move was:\n";
        Player2.Move(x2,y2);
    };
    chrono::high_resolution_clock::time_point stop = chrono::high_resolution_clock::now();
    chrono::duration<double> time_span = duration_cast<chrono::duration<double>>(stop - start);
    cout << "You've used this program for: " << time_span << "\n";
    return 0;
}