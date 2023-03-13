//Write a c++ program to calculate factorial of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a number ";
    int n;
    cin>>n;

    int number=n;
    int fact=1;
    while(n)
        fact*=n--;  //Here,post-decrement are present.Therefore, firstly multiply and assignment operator will work then post-decrement of n will happen
    cout<<"Factorial of a number "<<number<<" is "<<fact<<endl;

    getch();
    return 0;
}
