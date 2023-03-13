//Write a C++ program to check whether a given number is positive, negative or zero.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a number ";
    int x;
    cin>>x;
    if(x>0)
        cout<<"Number is positive ";
    else if(x<0)
        cout<<"Number is Negative ";
    else
        cout<<"Number is zero ";
    getch();
}
