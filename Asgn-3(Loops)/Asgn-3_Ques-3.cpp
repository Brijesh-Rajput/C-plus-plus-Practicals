//Write a C++ program to print first N even natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Number ";
    int n;
    cin>>n;

    for(int i=n;i>0;i--)
        cout<<2*i<<" ";
    cout<<endl;

    getch();
    return 0;
}
