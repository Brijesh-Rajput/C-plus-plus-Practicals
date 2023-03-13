/*
//Write a C++ program which takes a character from user and display its ASCIIcode.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter a character "<<endl;
    char ch;
    cin>>ch;
    cout<<"Character is "<<ch<<" And its ASCII code is "<<(int)ch;
    ///Here, we can typecast character into integer easily b'coz char type variable consumes 1 byte memory and int type variable consumes 4 byte memory.
    ///so, when we typecast the int type variable into char type then there is a chances to corrupt data
    getch();
}
*/



//Or



#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Charcter is "<<'a'<<" and its ASCII code is "<<(int)'a'<<endl;
    cout<<'as'; ///Why this output comes ? ---> 24947
    getch();
}
/// 'a'--->its a character in cout,  (int)'a' ---->Ascii code of a
