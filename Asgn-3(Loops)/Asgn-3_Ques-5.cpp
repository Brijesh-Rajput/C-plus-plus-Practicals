//Write a C++ program to calculate sum of first N natural numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Number ";
    int n;
    cin>>n;

    /*
    int sum=0;
    for(int i=n;i>0;i--)
        sum+=i;
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;
    */

    //OR

    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;

    getch();
    return 0;
}
