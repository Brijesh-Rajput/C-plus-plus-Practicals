//Write a C++ program to calculate the sum of digits in a given number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;

    int number=n,sum_of_digits=0;
    while(n)
    {
        sum_of_digits+=n%10;
        n/=10;
    }
    cout<<"Sum of digits in a given number "<<number<<" is "<<sum_of_digits<<endl;

    getch();
    return 0;
}
