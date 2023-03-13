/*
//Write a program to calculate average of three numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter three numbers "<<endl;
    int x,y,z;
    cin>>x>>y>>z;
    cout<<"Average of three numbers is "<<(x+y+z)/3.0;
    getch();
    return 0;
}
*/


//OR


//Write a C++ program to find the greater among 3 given numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter 3 Numbers ";
    int x,y,i=0;
    cin>>x;
    y=x;
    while(i<2)
    {
        cin>>x;
        if(y<x)
            y=x;
        i++;
    }
    cout<<"Greater among 3 given numbers is "<<y;
    getch();
}
