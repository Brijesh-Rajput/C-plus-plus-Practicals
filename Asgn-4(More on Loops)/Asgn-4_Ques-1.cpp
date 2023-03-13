//Write a C++ program to check whether a given number is prime or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;

    int i;
    for(i=2;i<n;i++)
        if(!(n%i))
            break;
    if(i!=n)
        cout<<"Given number "<<n<<" is not a prime number ";
    else
        cout<<"Number "<<n<<" is a prime number ";
    cout<<endl;

    getch();
    return 0;
}
