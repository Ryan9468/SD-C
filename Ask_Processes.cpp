#include "main.h"

void Ask_Processes(){
    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
    char response, response2, response3;
    cout << "Would you like to use the calculator? [Y] or [N]:\n";
    cin >> response;
    if(response == 'Y' || response == 'y'){
        apps::calculator();
    }
    cout <<  "Would you like to use the Metric Converter? [Y] or [N]:\n";
    cin >> response2;
    if(response2 == 'Y' || response2 == 'y'){
        apps::metric();
    };
    cout <<  "Would you like to use the String Concatinator? [Y] or [N]:\n";
    cin >> response2;
    if(response2 == 'Y' || response2 == 'y'){
        apps::String_Concatination();
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
        cout << "Player 1's move was:";
        Player1.Move(x1,y1);
        cout << "Player 2's move was:";
        Player2.Move(x2,y2);
    };
};

// Side-Test Function
void apps::String_Concatination(){
    char s1[50], s2[50];
    cout << "Enter string s1: " << endl;
    cin >> s1;
    cout << "Enter string s2: " << endl;
    cin >> s2;
    strcat(s1, s2);
    cout << "String obtained on concatenation is: " << s1 << endl;
}
