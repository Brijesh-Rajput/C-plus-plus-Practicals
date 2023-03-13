//Write a C++ program to check whether a given number is divisible by 7 or not
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a number ";
    int x;
    cin>>x;
    if(x%7) //Paranthesis is must in c and c++ BUT in python paranthesis is not compulsory
        cout<<"Number "<<x<<" is not divisible by 7";
    else
        cout<<"Number "<<x<<" is divisible by 7";
    getch();
}
