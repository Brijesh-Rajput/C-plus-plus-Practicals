//Write a C++ program to swap values of two int variables.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter two values "<<endl;
    int a,b;
    cin>>a>>b;

    cout<<"Before swapping:- The values of a and b are "<<endl;
    cout<<"a="<<a<<" and b="<<b<<endl;

    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<endl;
    cout<<"Before swapping:- The values of a and b are "<<endl;
    cout<<"a="<<a<<" and b="<<b<<endl;

    getch();
}
///We can also swap the value of variables by passing its address to the function

///What is endl here ?
///What is NULL in pointer?
///What is None in Python ?


///Why this all above line are compiling ? Why compiler doesn't give the error ?
