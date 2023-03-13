#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int real,imaginary;
public:
    Complex(){ real=0; imaginary=0; }
    void setData(int real,int imaginary)
    { (*this).real=real; (*this).imaginary=imaginary; }
    void showData(){ cout<<"real="<<real<<" Imaginary="<<imaginary<<endl;}
    Complex addition(Complex C)
    {
        Complex temp;
        temp.real = real + C.real ;  //Or temp.real = this->real + C.real ;
        temp.imaginary = (*this).imaginary + C.imaginary ;
        return temp;
    }
    Complex subtraction(Complex C)
    {
        Complex temp;
        temp.real = this->real - C.real ;
        temp.imaginary = imaginary - C.imaginary ;
        return temp;
    }
    void multiplication(Complex c1,Complex c2)
    {
        //z=a+ib;  and  w=c+id;
        //zw = (ac-bd)+i(ad+bc);

        real = c1.real*c2.real - c1.imaginary*c2.imaginary ;
        imaginary = c1.real*c2.imaginary + c1.imaginary*c2.real ;

    }
};
//Or but there is much more unnecessary line is written
/*
Complex addition(Complex &C)  //Now reference will passed to this C
{
    Complex temp;
    temp.real = real + C.real ;  //Or temp.real = this->real + C.real ;
    temp.imaginary = (*this).imaginary + C.imaginary ;
    retun temp;
}
Complex addition(Complex *C) //Now address will be passed to this C
{//B'coz C is pointer object Now,
    Complex temp;
    temp.real = real + C->real ;  //Or temp.real = this->real + C->real ;
    temp.imaginary = (*this).imaginary + (*C).imaginary ;
    retun temp;
}
*/
int main()
{
    Complex c1,c2,c3;
    c1.setData(5,9);
    c2.setData(9,7);

    //for addition
    cout<<"Addtion of two Complex no."<<endl;
    c3=c1.addition(c2);
    c3.showData();

    cout<<"Subtraction of two Complex no."<<endl;
    c3=c1.subtraction(c2);
    c3.showData();

    cout<<"Multiplication of two Complex No."<<endl;
    c3.multiplication(c1,c2);
    c3.showData();

    getch();
}
