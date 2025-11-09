#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    // Classwork 1
    /*
    Write a program that prompts the user to enter an integer.
    If the number is a multiple of 5, display HiFive.
    If the number is even, display HiEven.
    */
    int x;
    cout << "Give me a number: ";
    cin >> x;
    if (x % 5 == 0) {
        cout << "HiFive" << endl;
    }

    if (x % 2 == 0) {
        cout << "HiEven" << endl;
    }

    // Classwork 2
    /*
    Write a program in C++ to get the age of a student,
    and display "You are an adult" if the value of the age is at least 18,
    and display "You are not an adult" otherwise.
    */
    int age;
    cout << "What is your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are an adult" << endl;
    } else {
        cout << "You are not an adult" << endl;
    }
    // Random number generation
    srand(time(0)); // ✅ Correct function name
    cout << "Random number: " << rand() << endl;
    return 0;
}
