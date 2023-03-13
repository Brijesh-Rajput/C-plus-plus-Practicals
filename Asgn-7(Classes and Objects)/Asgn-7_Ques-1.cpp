#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int real_part;
    int imaginary_part;
public:
    void set_complex_number(int real_part,int imaginary_part)
    {
        this->real_part=real_part;
        this->imaginary_part=imaginary_part;
    }
    void Print_complex_number()
    {
        if(imaginary_part<0)
            cout<<"Complex number is "<<real_part<<"-"<<-imaginary_part<<"i"<<endl; //-(-5) == 5  Or -5*-1==5
        else
            cout<<"Complex number is "<<real_part<<"+"<<imaginary_part<<"i"<<endl;
    }
};
int main()
{
    class Complex c1; //Creating an object of Complex class
    Complex c2; //Creating an object of Complex class
    c1.set_complex_number(3,7);
    c1.Print_complex_number();
    c2.set_complex_number(-4,-8);
    c2.Print_complex_number();
    cout<<"successful run";
    getch();
    return 0;
}
























/*
#include<iostream>
#include<conio.h>
using namespace std;
class Complex //Represents Complex number
{
private:
    int real_part; //instance member variables
    int imaginary_part; //instance member variables
public:
    //instance member functions to set values of complex number
    void set_complex_number(int real_part,int imaginary_part)  //Bydefault this function will be consider as inline
    {                                                          //B'coz:- this function is define inside the body of a class
        this->real_part=real_part;
        this->imaginary_part=imaginary_part;
        //this.imaginary_part=imaginary_part;  //Error:-error: request for member 'real_part' in '(Complex*)this', which is of pointer type 'Complex*' (maybe you meant to use '->' ?)|
    }

    //instance member functions to print values of complex number
    void Print_complex_number();
};
void Complex::Print_complex_number() //Now, this function will not consider as inline function(implicitly) bydefault
{                                    //B'coz it is define outside the class
    cout<<"Complex number is "<<real_part<<"+("<<imaginary_part<<"i) "<<endl;
} //To make this inline function we have to right inline keyword explicitly at the time of declaration of function in the body of class.


int main()
{
    class Complex c1; //Creating an object of Complex class
    Complex c2; //Creating an object of Complex class
    c1.set_complex_number(3,7);
    c1.Print_complex_number();
    c2.set_complex_number(-4,-8);
    c2.Print_complex_number();
    getch();
    return 0;
}
*/

















/*
for e.g:-
class Complex //Represents Complex number
{
private:
    int real_part; //instance member variables
    int imaginary_part; //instance member variables
public:
    //instance member functions to set values of complex number
    void set_complex_number(int real_part,int imaginary_part)  //Bydefault this function will be consider as inline
    {                                                          //B'coz:- this function is define inside the body of a class
        this.real_part=real_part;
        this.imaginary_part=imaginary_part;
    }

    //instance member functions to print values of complex number
    inline void Print_complex_number();
};
void Complex::Print_complex_number() //Now, this function will consider as inline function(explicitly) bydefault
{                                    //B'coz it is define outside the class
    cout<<"Complex number is "<<real_part<<" + ("<<imaginary_part<<") "<<endl;
}
*/
