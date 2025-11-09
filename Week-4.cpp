#include <iostream>
#include <iomanip> //setw()
using namespace std;

int main(){
    int day;
    cout<<"Enter the day==>";
    cin>>day;
    //Learning about switch statement 
    //using if statement 
    if(day==1){
        cout<<"Weekday"<<endl;
    }else if(day==2){
        cout<<"Weekday"<<endl;
    }
    else if(day==3){
        cout<<"Weekday"<<endl;
    }else if(day==4){
        cout<<"Weekday"<<endl;
    }else if(day==5){
        cout<<"Weekday"<<endl;
    }else if(day==0){
        cout<<"Weekend"<<endl;
    }else if(day==6){
        cout<<"Weekend"<<endl;
    }else{
        cout<<"not a day"<<endl;
    }

    //Using switch case for the same problem 
    switch(day){
        case 1:
            cout<<"Weekbaa";
            break;
        case 2:
            cout<<"Weekday";
            break;
        case 3:
            cout<<"Weekday";
            break;
        case 4:
            cout<<"Weekday";
            break;
        case 5:
            cout<<"Weekday";
            break;
        case 0:
            cout<<"Weekend";
            break;
        case 6:
            cout<<"Weekend";
            break;
    }
    //Classwork 1
    int year;
    cout<<"What is your Zodiac-Sign year ==> ";
    cin>>year;
    int remainder = year % 12;
    switch (remainder)
    {
    case 0:
       cout<<"monkey"<<endl;
        break;
    case 1:
       cout<<"rooster"<<endl;
        break;
    case 2:
       cout<<"dog"<<endl;
        break;
    case 3:
       cout<<"pig"<<endl;
        break;
    case 4:
       cout<<"rat"<<endl;
        break;
    case 5:
       cout<<"ox"<<endl;
        break;
    case 6:
       cout<<"tiger"<<endl;
        break;
    case 7:
       cout<<"rabbit"<<endl;
        break;
    case 8:
       cout<<"dragon"<<endl;
        break;
    case 9:
       cout<<"snake";
        break;
    case 10:
       cout<<"horse";
        break;
    case 11:
       cout<<"sheep";
        break;
    default:
        cout<<"Something";
        break;
    }

    //2nd concept of the day ==> while loop
    int i = 1;
    int sum = 0;
    while(i<10){
        sum = i + sum;
        cout<<"When i is = "<<i<<" Currnt sum is ==> "<<sum<<endl;
        i++;   
    }
    cout<<"currnt Sum is ==> "<<sum<<endl;
    //Do while loop 
    int sum2 = 0;
    int data =0;
    do{
        sum +=data;
        cout<<"Enter an integer(input ends if it is 0): ";
        cin >> data;
    }while(data != 0);

    cout<<"The sum is: "<<sum;
    //For Loop
    for(i=1;i<=9;i++){
        cout<<"The current Value of i is ==> "<<i<<endl;
    }
int j;
int sum3=0;
    for(i=1;i<=5;i++){
        for(j=2;j<=3;j++){
            int tempsum = i + j;
            sum3 = tempsum + sum3;
            cout<<"The value of i==>"<<i<<"The Value of j ==>"<<j<<endl;
            cout<<"Current sum is ==> "<<sum3<<endl;
        }
    }
cout<<"Mulitplication Table"<<endl;
cout<<"===================="<<endl;
cout<<"    |";
for(int i=1;i<13;i++){
    cout<<setw(4)<<i;
    
}
cout<<"\n";
for(int j = 1; j<13; j++){
    cout<<j<<"   |";
    for(int k =1;k<13;k++){
        cout<<setw(4)<<j*k ;
    }
    cout<<endl;
}
    return 0;
}