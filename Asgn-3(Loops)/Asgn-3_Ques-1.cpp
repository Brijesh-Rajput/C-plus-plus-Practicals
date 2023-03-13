//Write a c++ program to print first N natural numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Number ";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
        cout<<i<<" ";
    cout<<endl;

    getch();
    return 0;
}
