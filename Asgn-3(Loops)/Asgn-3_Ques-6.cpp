//Write a C++ program to print table of user's choice
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;

    cout<<"Table of "<<n<<" is :-"<<endl;
    for(int i=1;i<=10;i++)
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    cout<<endl;

    getch();
    return 0;
}
