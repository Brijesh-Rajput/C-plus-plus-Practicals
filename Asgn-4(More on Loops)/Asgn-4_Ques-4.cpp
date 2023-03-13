//Write a C++ program to calculate LCM of two numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter two numbers ";
    int x,y;
    cin>>x>>y;

    if(x==y)
        cout<<"LCM of Two Number "<<x<<" and "<<y<<" is "<<x /*Or y */<<endl;
    else
    {
    //Storing bigger number in y compare to x variable
        if(x>y)
        {
            //swap the values
            int temp=x;
            x=y;
            y=temp;
        }

        //Finding LCM of two numbers x and y ,where x stores number which is less than y
        int LCM_of_Two_Number;
        for(int i=1;;i++)
        {
            LCM_of_Two_Number=y*i;
            if(!(LCM_of_Two_Number%x))
                break;
        }
        cout<<"LCM of Two Number "<<x<<" and "<<y<<" is "<<LCM_of_Two_Number<<endl;

    }
    getch();
    return 0;
}
///LCM(a,0) = 0
///LCM of negative number is what ?


///How to find LCM and HCF of more than two number ? Make a program using by-default and function overloading concept in C++
///Make a Full calculator in C++ using Function Overloading and by-default concept in C++.
///munna Calculator
///Library management system
///Banking system

