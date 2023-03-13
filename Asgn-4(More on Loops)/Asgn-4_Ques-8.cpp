//Write a C++ program to print octal of a given decimal number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a Number ";  //User can Enter negative decimal number also
    int n;
    cin>>n;

    //

    getch();
    return 0;
}
//We can print binary of a given decimal number by two ways :-
/*
1st :- by printing the binary one by one(we have to print reverse that's why we will use recursion)
2nd :- by storing the binary of decimal number
       But int data type can store only 4 bytes=4*8=32 --> That means,we can store maxium positive number is 2^32-1
*/
