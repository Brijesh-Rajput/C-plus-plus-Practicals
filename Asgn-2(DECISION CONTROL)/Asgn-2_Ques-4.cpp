//Write a C++ program to find nature of roots of quadratic equation.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Equation is :- ax^2+bx+c "<<endl;
    cout<<"Enter the value of constant a,b and c ";
    int a,b,c;
    cin>>a>>b>>c;
    int D=b*b-4*a*c;
    if(D>=0)
    {
        cout<<"Roots are Real \n";
        if(D==0)
            cout<<"Roots are equal and rational ";
        else if(sqrt(D)*sqrt(D)==D) //Its a perfect square
            cout<<"Roots are distinct and rational";
        else //D=b^2-4*a*c is not a perfect square
            cout<<"Roots are distinct and irrational";
    }
    else //if(D<0)
        cout<<"Roots are Imaginary";
    getch();
}
///What is endl in CPP ?
