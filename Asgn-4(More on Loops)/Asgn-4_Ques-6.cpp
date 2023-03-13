//Write a C++ program to find the highest value digit in a given number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Number "; //Negative number will also be accepted
    int n;
    cin>>n;
    int number=n;

    cout<<"Entered Number is "<<n<<endl;
    int Highest_digit=0; //b'coz :- suppose user enter 0 then Highest digit will be zero
           ///Very Imp ---->   //suppose user enter 000123 then it will be consider as 123 NOT zero
    while(n)
    {
        if(Highest_digit<n%10)
            Highest_digit=n%10;
        n/=10;
    }
    cout<<"Highest value digit in a given number "<<number<<" is "<<Highest_digit<<endl;

    getch();
    return 0;
}
