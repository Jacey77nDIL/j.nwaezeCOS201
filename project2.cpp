#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Read two numbers
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}