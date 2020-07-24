#include<iostream>
using namespace std;

void cyclicSwap(int *a, int *b, int *c) {
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

int main() {
    int a, b, c;
    cout << "Enter value of a, b and c respectively: \n";
    cin >> a >> b >> c;
    
    cout << "Value before swapping: " << endl;
    cout << "a, b and c respectively are: " << a << ", " << b << ", " << c << endl;
    
    cyclicSwap(&a, &b, &c);
    cout << "Value after swapping numbers in cycle: \n" << endl;
    cout << "a, b and c respectively are: " << a << ", " << b << ", " << c << endl;
}