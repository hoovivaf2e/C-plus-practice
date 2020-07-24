/*
Copy Strings
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
   /* Concatenate String Objects */
   string str1, str2;

    cout << "Enter string s1: ";
    getline (cin, str1);

    str2 = str1;

    cout << "string 1 = "<< str1 << endl;
    cout << "string 2 = "<< str2 << endl;
   
   
   /* Concatenate C-style Strings */
    char s1[100], s2[100];

    cout << "Enter string s1: ";
    cin.getline(s1, 100);

    strcpy(s2, s1);

    cout << "string 1 = "<< s1 << endl;
    cout << "string 2 = "<< s2;
    
   return 0;
}