//Write a C++ program to count digits in a given number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;

    int number=n,count=0;
    while(n)
    {
        n/=10;
        count++;
    }
    cout<<"Total no. of digits in a given number "<<number<<" is "<<count<<endl;

    getch();
    return 0;
}
