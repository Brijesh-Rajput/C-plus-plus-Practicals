/*
//Write a C++ program to calculate average of three numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter three numbers "<<endl;
    int x,y,z;
    cin>>x>>y>>z;
    cout<<"Average of three number is "<<(float)(x+y+z)/3;  //OR (x+y+z)/3.0
    getch();
}
*/


//Or


//Write a C++ program to calculate average of three numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter three numbers "<<endl;
    int x,sum=0,i=0;
    while(i<3)
    {
        i++;
        cout<<"Enter "<<i<<" number ";
        cin>>x;
        sum+=x;
    }
    cout<<"Average of three number is "<<sum/3.0;  //OR  (float)sum/3
    getch();
}
