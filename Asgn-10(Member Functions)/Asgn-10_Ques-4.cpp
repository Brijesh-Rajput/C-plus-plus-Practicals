///H.W_me:- Explicitly add the concept of default arguments.so that add function can add three int,float values and add function can concatenate three strings.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Operations
{
private:
    static float pi;
public:
    Operations(){ } //Empty :- B'coz there is no instance variable
    static float area(int r)
    { return pi*r*r; }
    static int area(int l,int b)
    { return l*b; }
    static int add(int a,int b)
    { return a+b; }
    /*
    static float add(float a,float b) //ERROR:-call of overloaded 'add(double, double)' is ambiguous|
    { return a+b; }
    */
    static double add(double a,double b) //Now, it works. How float value will done ?
    { return a+b; }
    static char* add(char *p,char* q)
    {
        /*
       if(strcat(p,q)==p)
        cout<<"1";
       else
        cout<<"0";
        */
        return strcat(p,q);
    }
    /*
    static char* add(char *p,char* q)
    {
       char str[50]=""; ///How to avoid to create dynamic string array ?
       return strcat(strcat(str,p),q);
    }
    */
};
float Operations::pi=3.14; //static variables are set default values like that
//instance variables are set default values by using constructor

//These above all functions are static b'coz there is no instance variable on which function can work.
//These above are member function B'coz these all function are realated to Operations.

/*
//SEE the Error
 string add(char *p,char* q)
{
    string ch="";
   return strcat(strcat(ch,p),q);
}
*/
int main()
{
    //Operations o1,o2,o3;   No Need to create an object to call the static member function
    cout<<"Addition of 5 and 6 is "<<Operations::add(5,6)<<endl;
    cout<<"Addition of 6.8 and 9.1 is "<<Operations::add(6.8,9.1)<<endl;

    //here, in below ther is nothing print. as function will destroy then ch string will destroy where addition of two string is store.
    //And address of ch will return which will destroy so,illegal memory access will happen.
   // cout<<"Addition of Brijesh +Rajput is "<<Operations::add("Brijesh ","Rajput")<<endl;

   char ch1[50]="Brijesh ";
   char ch2[25]="Rajput";
   cout<<"Addition of two strings are "<<Operations::add(ch1,ch2)<<endl;

    cout<<"Area of circle is "<<Operations::area(7.5)<<endl;
    cout<<"Area of rectangle is "<<Operations::area(5,4)<<endl;
    getch();
}
