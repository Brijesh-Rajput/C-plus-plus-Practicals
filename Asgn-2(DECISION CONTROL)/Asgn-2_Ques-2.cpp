//Write a c++ program to check whether a triangle is right angled triangle or not.Takes lengths of sides from the user
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter the length of triangle ";
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    x1*=x1;
    x2*=x2;
    x3*=x3;

    if(x1+x2==x3 || x2+x3==x1 || x1+x3==x2)
        cout<<"Triangle is right angled trinagle";
    else
        cout<<"Triangle is not a right angled triangle";

    getch();
}
