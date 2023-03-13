#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int real,imaginary;
public:
    Complex() { real=0; imaginary=0; }
    void setData(int real,int imaginary) { this->real=real; this->imaginary=imaginary; }
    void showData(){ cout<<"real ="<<real<<" Imaginary="<<imaginary<<endl; }
    //Operator Overloading
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.real=real+C.real;
        temp.imaginary=imaginary+C.imaginary;
        return temp;
    }
    Complex operator *(Complex C)
    {
        //z=a+ib;  and  w=c+id;
        //zw = (ac-bd)+i(ad+bc);
        Complex temp;
        temp.real = real*C.real - imaginary*C.imaginary ;
        temp.imaginary = real*C.imaginary + imaginary*C.real ;
        return temp;
    }
    int operator==(Complex C)
    {
        return real==C.real && imaginary==C.imaginary; //Not required to use the paranthesis. Like return i+fun(i-1);
    }
};
//for cascading:- it's neccessary that the return type of operators must be returning an object NOT a void return type.
int main()
{
    Complex c1,c2,c3,c4,c5;
    //char str[50]="Hello";
    //cout.operator<<((char)str[0]); //How to print string like this ?
    c1.setData(5,9);
    c2.setData(8,2);
    c3.setData(7,1);
    c4=c1+c2+c3; //Or  c4=(c1.operator+(c2)).operator+(c3);
    c5=c4.operator*(c2);

    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    c5.showData();
    getch();
}
