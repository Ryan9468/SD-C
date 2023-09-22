#include "main.h"
void apps::String_Concatination(){
    char s1[50], s2[50];
    cout << "Enter string s1: " << endl;
    cin >> s1;
    cout << "Enter string s2: " << endl;
    cin >> s2;
    strcat(s1, s2);
    cout << "String obtained on concatenation is: " << s1 << endl;
}