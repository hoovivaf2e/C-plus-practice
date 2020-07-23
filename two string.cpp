/*
Two Strings
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
   /* Concatenate String Objects */
   string str1, str2, result;
   
   cout << "Enter string 1: ";
   getline(cin, str1);
   
   cout << "Enter string 2: ";
   getline(cin, str2);
   
   result = str1 + str2;
   
   cout << "Resultant String = " << result << endl;
   
   
   /* Concatenate C-style Strings */
   char s1[50], s2[50], r3[100];

    cout << "Enter string s1: ";
    cin.getline(s1, 50);

    cout << "Enter string s2: ";
    cin.getline(s2, 50);

    strcat(r3, s1); 
    strcat(r3, s2); 

    cout << "Resultant String = " << r3 << endl;
    
   return 0;
}

