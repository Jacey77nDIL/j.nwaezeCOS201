//This is the global part of the program
#include <iostream>
#include <cmath>
const  float PI = 3.14159;

using namespace std;
//This is the local part  of a c++ program thats anything inside the int main function 
int main()
{
double r=5.0;
double circle;
circle = 2*PI*r;
cout << circle<<endl;
int i;
int j;
//post increament: this is the oppsite of pre increament, in this case it uses the orginal vaule of i for j before increamnet
i = 1;
j = i++;
cout<<j<<endl;
cout<<i<<endl;
//pre increament:this increase the value of i and gives it to J, the increament of i is parmant
i=1;
j=++i;
cout<<j<<endl;
cout<<i<<endl;
//Classwork 1
/*

*/
double opp;
double adj;
double hype;
float sum_of_square;
cout<<"What is the length of the oppsite: ";
cin>>opp;
cout<<"What is the length of the adjacent: ";
cin>>adj;
sum_of_square = (opp*opp) + (adj*adj);
hype = sqrt(sum_of_square);
cout<<"The lenght of the hypotanus is: "<<hype<<endl;
//classwork 2
    float account_balance;
    float annual_interest_rate;
    float TIME;
    float simple_interest;
    float simple_interest2;
    cout<< "Interest calculation program"<<endl;
    cout<<"Enter starting balance: ";
    cin>>account_balance;
    cout<<"Enter annual interest: ";
    cin>>annual_interest_rate;
    cout<<"Enter time: ";
    cin>>TIME;
    simple_interest = (account_balance * annual_interest_rate * TIME) / 100.0;
    simple_interest2 = (account_balance * annual_interest_rate * (TIME + 1.0)) / 100.0;
    float new_account_balance = account_balance + simple_interest;
    float new_account_balance2 = account_balance + simple_interest2;
    
    cout << "Your new account balance after one year will be: " << new_account_balance << endl;
    cout << "Your new account balance after two years will be: " << new_account_balance2 << endl;

return 0;
}