//Write a c++ program to print first N odd natural number in reverse order
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Number ";
    int n;
    cin>>n;

    for(int i=n;i>0;i--)
        cout<<2*i-1<<" ";
    cout<<endl;

    getch();
    return 0;
}
