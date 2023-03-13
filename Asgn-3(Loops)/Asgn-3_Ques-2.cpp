//Write a C++ program to print first N natural numbers in reverse order
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Number ";
    int n;
    cin>>n;

    for(int i=n;i>0;i--)
        cout<<i<<" ";
    cout<<endl;

    getch();
    return 0;
}
