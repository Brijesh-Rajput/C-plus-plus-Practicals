/*
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
    //Unary Operator Overloading
    Complex operator-()
    {
        Complex temp;
        temp.real=-real;
        temp.imaginary=-imaginary;
        return temp;
    }
    ///Don't need to overload asgn oprtr as it is overload by a compiler
    /*
    Complex operator=(Complex C)
    {
        real=C.real;
        imaginary=C.imaginary;
        return C;
    }
    */
    /* //Wrong coding
    Complex operator++(int) //for postdecrement overloading operator
    {
        real=real+1;
        imaginary=imaginary+1;
        return (*this);
    }
    /
    Complex operator++(int)  ///For postdecrement operator overloading
    {
        Complex temp;
        temp.real=real;
        temp.imaginary=imaginary;
        real=real+1;
        imaginary=imaginary+1;
        return temp;  //NOT return (*this);  //we are returning an object. if we are returning an address of an object then return type will be Complex* and this address will store in an object pointer not in an object.
    }
    /*
    Complex operator++()
    {
        real+=1;  ///Try to overload this all += and -= and *= and /= operator ---->H.w by me.
        imaginary+=1;
        return (*this);
    }
    /
    //Lets try by returning an address of an object.
    //we can't write both code in same class B'coz in C++ signature of a function must be different.But above and below snippets has same function signature But different in return type of an  preincrement operator.
    Complex* operator++()
    {
        real+=1;  ///Try to overload this all += and -= and *= and /= operator ---->H.w by me.
        imaginary+=1;
        return this;
    }c2=*(++c1); //Or c2=*(c1.operator++()); //we will call like this


    //My defination of this line at the first time was ---> c2=c1++;
    //as c2 has more priority that's why c2 will call assignment operator and assign object 1 in them and then the object which was return by an asgn oprtr will call increment oprtr ++ . Not pre and Not post. Only simple increment operator.
    ///Try this
    /*
    Complex operator=(Complex C) ///Don't need to overload asgn oprtr as it is overload by a compiler
    {
        real=C.real;
        imaginary=C.imaginary;
        return C;
    }
    Complex operator++()
    {
        real+=1;  ///Try to overload this all += and -= and *= and /= operator ---->H.w by me.
        imaginary+=1;
        return (*this);
    }
    //
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(5,8);
    //c3=c1.operator++();  ///Or c3=c1++;  ///How to make coding of this line ?
    c1.showData();
    c3=c1++;  ///Error:- no 'operator++(int)' declared for postfix '++' [-fpermissive]|
    ///me:- c3.operator=(c1); then object returned object is c1 which calls postincrement operator
    ///b'coz priority of asgn oprtr is more compare to postincrement.
    c3.showData();
    c1.showData();
    c2=*(++c1); //Or c2=c1.operator++();
    c1.showData();
    c2.showData();
    getch();
}
*/

///OR

/*
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
    //Unary Operator Overloading
    Complex operator-()
    {
        Complex temp;
        temp.real=-real;
        temp.imaginary=-imaginary;
        return temp;
    }
    ///Don't need to overload asgn oprtr as it is overload by a compiler
    /*
    Complex operator=(Complex C)
    {
        real=C.real;
        imaginary=C.imaginary;
        return C;
    }
    */
    /* //Wrong coding
    Complex operator++(int) //for postdecrement overloading operator
    {
        real=real+1;
        imaginary=imaginary+1;
        return (*this);
    }
    */
    /* //This is wrong. see why. B'coz we are returning address of a caller object not of the temp object.
    Complex* operator++(int)
    {
        Complex temp;
        temp.real=real;
        temp.imaginary=imaginary;
        real+=1;
        imaginary+=1;
        return this;
    }
    /
    Complex operator++(int)  ///For postdecrement operator overloading
    {
        Complex temp;
        temp.real=real;
        temp.imaginary=imaginary;
        real=real+1;
        imaginary=imaginary+1;
        return temp;  //NOT return (*this);  //we are returning an object. if we are returning an address of an object then return type will be Complex* and this address will stor in an object pointer not in an object.
    }
    Complex operator++()
    {
        real+=1;  ///Try to overload this all += and -= and *= and /= operator ---->H.w by me.
        imaginary+=1;
        return (*this);
    }
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(5,8);
    //c3=c1.operator++();  ///Or c3=c1++;  ///How to make coding of this line ?
    c1.showData();
    c3=c1++;  ///Error:- no 'operator++(int)' declared for postfix '++' [-fpermissive]|
    ///me:- c3.operator=(c1); then object returned object is c1 which calls postincrement operator
    ///b'coz priority of asgn oprtr is more compare to postincrement.
    c3.showData();
    c1.showData();
    c2=++c1; //Or c2=c1.operator++();
    c1.showData();
    c2.showData();
    getch();
}
*/

/*
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
    //Unary Operator Overloading
    Complex operator-()
    {
        Complex temp;
        temp.real=-real;
        temp.imaginary=-imaginary;
        return temp;
    }
    ///Don't need to overload asgn oprtr as it is overload by a compiler
    /*
    Complex operator=(Complex C)
    {
        real=C.real;
        imaginary=C.imaginary;
        return C;
    }
    */
    /* //Wrong coding
    Complex operator++(int) //for postdecrement overloading operator
    {
        real=real+1;
        imaginary=imaginary+1;
        return (*this);
    }
    /
    Complex operator++(int)  ///For postdecrement operator overloading
    {
        Complex temp;
        temp.real=real;
        temp.imaginary=imaginary;
        real=real+1;
        imaginary=imaginary+1;
        return temp;  //NOT return (*this);  //we are returning an object. if we are returning an address of an object then return type will be Complex* and this address will store in an object pointer not in an object.
    }
    /*
    Complex operator++()
    {
        real+=1;  ///Try to overload this all += and -= and *= and /= operator ---->H.w by me.
        imaginary+=1;
        return (*this);
    }
    /
    //Lets try by returning an address of an object.
    //we can't write both code in same class B'coz in C++ signature of a function must be different.But above and below snippets has same function signature But different in return type of an  preincrement operator.
    Complex* operator++()
    {
        real+=1;  ///Try to overload this all += and -= and *= and /= operator ---->H.w by me.
        imaginary+=1;
        return this;
    }c2=*(++c1); //Or c2=*(c1.operator++()); //we will call like this
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(5,8);
    //c3=c1.operator++();  ///Or c3=c1++;  ///How to make coding of this line ?
    c1.showData();
    c3=c1++;  ///Error:- no 'operator++(int)' declared for postfix '++' [-fpermissive]|
    ///me:- c3.operator=(c1); then object returned object is c1 which calls postincrement operator
    ///b'coz priority of asgn oprtr is more compare to postincrement.
    c3.showData();
    c1.showData();
    c2=*(++c1); //Or c2=c1.operator++();
    c1.showData();
    c2.showData();
    getch();
}
*/
