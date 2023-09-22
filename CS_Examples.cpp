#include "main.h"
void apps::String_Concatination(){
    char s1[50], s2[50], result[100];
    cout << "Enter string s1: " << endl;
    cin >> s1; // Reading first string from user
    cout << "Enter string s2: " << endl;
    cin >> s2; // Reading second string from user
    strcat(s1, s2);  // strcat is use to Concatenates two strings
    cout << "String obtained on concatenation is:" << s1 << endl;
}