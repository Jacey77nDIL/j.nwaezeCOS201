#include <iostream>
//This is called a comment
/*
This is a multi lined comment
*/
using namespace std;

int main(){
    //Class-Work 1
    /*Use the simple print out function to display whats on the broad*/
    cout<<"      * "<<endl;
    cout<<"     * *"<<endl;
    cout<<"    *   *"<<endl;
    cout<<"    *****"<<endl;
    cout<<"   *     *"<<endl;
    cout<<"  *       *"<<endl;
    cout<<" *         *"<<endl;
    //Class-Work 2
    //Use the operations to find the circumfernce of a circle
    double r;
    cout<<"What is the radius of the circle: ";
    cin >> r;
    double PI = 3.142;
    double area = PI *(r*r);
    cout<<"The area if the circle is "<<area<<endl;
    //Assignment 1
    /*Write a c++ that reads 2 numbers  and prints their sum,  their difference and product.*/
    int num1;
    int num2;
    cout<<"Give Me a Number \nNum1: ";
    cin >> num1;
    cout<<"Give Me a Number \nNum2: ";
    cin >> num2;
    int sum = num1 +num2;
    int difference = num1 - num2;
    int product = num1*num2;
    cout<<"The sum of "<<num1<<" and "<<num2<<" = "<<sum<<endl;
    cout<<"The Difference of "<<num1<<" and "<<num2<<" = "<<difference<<endl;
    cout<<"The product of "<<num1<<" and "<<num2<<" = "<<product<<endl;
    //Assignment 2
    /*Write a program that swaps the value of 2 integers using a temporary variable*/
    int a;
    int b;
    int tempa;
    int tempb;
    cout<<"Give Me a Number \na: ";
    cin >> a;
    cout<<"Give Me a Number \nb: ";
    cin >> b;
    cout<<"Now lets swap them"<<endl;
    tempa=a;
    tempb=b;
    a=tempb;
    b=tempa;
    cout<<"A is now "<<a<<endl;
    cout<<"B is now "<<b<<endl;
    
    return 0;
}
