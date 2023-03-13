#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int real,imaginary;
public:
    Complex()
    {
        real=0;
        imaginary=0;
    }
    Complex(int real,int imaginary)
    { this->real=real; (*this).imaginary=imaginary; }
    Complex(Complex &C)  //Copy Constructor
    {//reference of Complex object is taken. NOT its instance variable value Or address of Complex object
        real=C.real;
        imaginary=C.imaginary;
    }
    void SetData(int real,int imaginary){ this->real=real; (*this).imaginary=imaginary; }
    void ShowData(){ cout<<"real ="<<real<<" Imaginary="<<imaginary<<endl; }
};
/*
int main()
{
    Complex c1,c2(3,5);

    Complex c3=c2; //Here c3 object is created and at that time constructor of c3 will called which takes c1 as an argument.(That means takes Complex object as an argument.)
   ///Reference of c2 is passing to reference variable of Complex type C in constructor.

   ///Below is error. BUT Why ?
   // Complex c4=Complex(c2); ///Error:- cannot bind non-const lvalue reference of type 'Complex&' to an rvalue of type 'Complex'

    Complex c5(c2); ///It's a Wrong Syntax. Acc. to sir? But then also code is running.Why?

    c1.ShowData();
    c2.ShowData();
    c3.ShowData(); //c2 and c3 have same data
//    c4.ShowData();
    c5.ShowData();

    getch();
}
*/
