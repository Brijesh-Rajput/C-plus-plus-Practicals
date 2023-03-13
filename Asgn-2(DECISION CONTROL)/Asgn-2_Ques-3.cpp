//Write a C++ program to check whether a given number is a valid octal number or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter an Octal number ";
    int x;
    cin>>x;

    //is valid Octal number
    while(x)
    {
       int j=x%10;
       if(j==8 || j==9)  //instead of that we can switch case like ---> case 8...9 --->using this concept of switch continous
            break;
       x/=10;
    }
    if(x)
        cout<<"Its NOT a Valid Octal Number";
    else
        cout<<"Its a Valid Octal number";


    getch();
}
