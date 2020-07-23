/*
Length of a String
- Length of String Object
- Length of C-style string
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
   
   string str = "";
   cout << "**************** Length of String Object ****************\n";
   cout << "Enter a line of string: ";
   cin >> str;
   
   cout << "String Length = " << str.length() << endl;
   
   cout << "**************** Length of C-style string ****************\n";
   
   char str2[256];
   cout << "Enter a line of string: ";
   
   cin >> str2;
   cout << "String Length = " << strlen(str2) << endl;
   
   return 0;
}