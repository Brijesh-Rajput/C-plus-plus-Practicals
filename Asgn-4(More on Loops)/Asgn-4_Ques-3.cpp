//Write a C++ program to print first N terms of Fibonacci series.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Number ";
    int n;
    cin>>n;

    //printing n terms of Fibonacci series
    int a=-1,b=1,sum;
    cout<<"The First "<<n<<" terms of Fibonacci series are :- "<<endl;
    for(int i=0;i<n;i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    cout<<endl;

    getch();
    return 0;
}
///Fibonacci series:- 0 1 1 2 3 5 8 13 21 34 55 89 ...
//let n=5 then first 5 terms of Fibonacci series are 0 1 1 2 3
///How many no. of digits of a number can store in 4 bytes(int data type)
