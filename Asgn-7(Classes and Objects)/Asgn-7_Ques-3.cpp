#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
private:
    int length;
    int breadth;
    int height;
    int is_valid_input;
public:
    Box()//constructor
    {
        is_valid_input=0;
    }
    void set_dimensions(int ln,int br,int ht)  //display can't be negative
    {
        if(ln<0 || br<0 || ht<0)
            cout<<"From set_dimensions:-Enter a Valid dimensions"<<endl;
        else
        {
         length=ln;
        breadth=br;
        height=ht;
        is_valid_input=1;
        }
    }
    void display_dimensions()
    {
        if(is_valid_input)
            cout<<"length is "<<length<<" breadth is "<<breadth<<" height is "<<height<<endl;
        else
            cout<<"from display_dimensions:- First set the valid dimension of box"<<endl;
    }
    int volume()
    {
        if(is_valid_input)
            return length*breadth*height;
        else
            return -1; ///Error ...  Note:-Volume can't be negative
    }
};
int main()
{
    Box b1,b2;
    b1.set_dimensions(12,15,48);
    b1.display_dimensions();
    cout<<b1.volume()<<endl;

    cout<<endl;

    b2.set_dimensions(12,84,-78);
    b2.display_dimensions();
    if(b2.volume()==-1)
        cout<<"form volume:- Error:-first set the correct dimension"<<endl;
    else
        cout<<b2.volume()<<endl;
    getch();
    return 0;
}
///For more update Learn exception_Handling in CPP
