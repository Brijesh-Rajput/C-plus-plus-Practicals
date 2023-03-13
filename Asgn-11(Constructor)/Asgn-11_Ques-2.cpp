#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
private:
    int length,breadth,height;
public:
    Box() //Non-parameterized constructor
    { length=0; breadth=0; height=0; }
    Box(int length,int breadth,int height)
    { this->length=length; (*this).breadth=breadth; this->height=height; }

    //Take one argument which is for all three dimensions.
        //we can make an array which consist of all three argument OR we can make a Copy Constructor.
    Box(Box &b) //sir has told that reference variable should initilaize with an ordinary variable at the time of Declaration. Then here ?
    {
        length=b.length;
        breadth=b.breadth;
        height=b.height;
    }
    void setDimensions(int length,int breadth,int height)
    { this->length=length; (*this).breadth=breadth; this->height=height; }
    void showDimensions()
    { cout<<"Length ="<<length<<" Breadth="<<breadth<<" Height="<<height<<endl; }
};
int main()
{
    Box b1,b2(5,2,9);
    Box b3=b2;
    Box b4(b2); //Acc. to sir, this is an Error. But then also it works. Why ?
   // Box b5=Box(b2); //But this syntax give me an Error:- cannot bind non-const lvalue reference of type 'Box&' to an rvalue of type 'Box'|

    b1.showDimensions();
    b2.showDimensions();
    b3.showDimensions();
    b4.showDimensions();
   // b5.showDimensions();

    getch();
}
