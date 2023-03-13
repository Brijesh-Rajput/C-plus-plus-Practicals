//Write a C++ program to check whether a given year is a leap year or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Year ";
    int x;
    cin>>x;

    //is Leap year Or Not -->Logic
    //Code is written By using chart given in my C++ NOTES
    //see my previous code
    if(!(x%4))  //Priority of AND operator is more compare to OR operator
    {
        if(x%100)
            cout<<"It's a Leap Year";
        else if(x%400)
            cout<<"It's Not a Leap year";
        else
            cout<<"It's a Leap Year";
    }
    else
        cout<<"It's Not a Leap year";

    //Mycode and logic
    //if year is divisible by 4 and Not 100 then it is a Leap year
    //And if given year is divisible by 4 and 100 and not divisible by 400 then it is not a Leap year
    //If given year is divisible by 4 and 100 and also divisible by 400 then it is a Leap year
    /*
    if (x%4==0 && x%100!=0)
        cout<<"It's a Leap year";
    else if(x%4==0 && x%100==0 && x%400==0)
        cout<<"It's a Leap year";
    else
        cout<<"It's Not a Leap year";
    */

    getch();
}
///My Question
Q. Write a Program to print all 100 Leap year from 1800yr.
