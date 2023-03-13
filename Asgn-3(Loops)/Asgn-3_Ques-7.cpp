//Write a C++ program to calculate sum of squares of first N natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;

    int sum_of_squares=0;
    for(int i=1;i<=n;i++)
        sum_of_squares+=i*i;   //firstly square of i will perform then addition assignment operator(+=) will do their task
    cout<<"Sum of squares of first "<<n<<" natural numbers is "<<sum_of_squares<<endl;

    getch();
    return 0;
}
