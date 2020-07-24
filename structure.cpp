/*
Store and Display Information Using Structure
*/

#include <iostream>

using namespace std;

struct student {
    char name[50];
    int roll;
    float marks;
}

int main() {
   student stu;
   
   cout << "Enter information," << endl;
   cout << "Enter name: ";
   cin >> stu.name;
   cout << "Enter roll number: ";
   cin >> stu.roll;
   cout << "Enter marks: ";
   cin >> stu.marks;
   
   cout << "\nDisplaying Information," << endl;
   cout << "Name: " << s.name << endl;
   cout << "Roll: " << s.roll << endl; 
   cout << "Marks: " << s.marks << endl;
   
   return 0;
}