/*
//Write a C++ program to print Hello world on the screen
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Hello World";
    getch();
}
*/
//cout<<       ------->Insertion operator
//cin>>        ------->Extraction operator



//OR


/*
//Write a C++ program to print Hello world on the screen
#include<iostream>
#include<conio.h>
int main()
{
    std::cout<<"Hello World";
    getch();
}
*/



//Or



///Below code is wrong ---> see CPP word notes ---> learn stream hirearcy of c++
//Write a C++ program to print Hello world on the screen
#include<ostream>  //Note :- Here we are using ostream instead of iostream --------> ostream means output stream
#include<conio.h>   //B'coz in this program we only want to use output instruction. That's Why we are only using ostream Not iostream
int main()
{
    std::cout<<"Hello World"; //ERROR:- 'cout' is not a member of 'std'
    getch();
}

//Question:-
//istream,ostream,iostream ---> these all are header file or not ?  If they are not header file then what they are ?
//What was the extension of this file
//ANSWER:- iostream is a header file

///NOTE:-'std::cout' is defined in header '<iostream>'; did you forget to '#include <iostream>'?

//According to me cout is the object of ostream and cin is the object of istream but it is present in iostream header file

In C++ there are number of stream classes for defining various streams related with files and for doing input-output operations.
All these classes are defined in the file iostream.h. Figure given below shows the hierarchy of these classes.
