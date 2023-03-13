//Write a C++ program to check whether a given character is a digit, lowercase alphabet, uppercase alphabet or a special character.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter(Press) a Key(Or character) ";
    char ch;
    cin>>ch;
    if(ch>='0' && ch<='9')
        cout<<"Character "<<ch<<" is a digit";
    else if(ch>='a' && ch<='z')
        cout<<"Character "<<ch<<" is a Lowercase_Alphabet";
    else if(ch>='A'&&ch<='Z')
        cout<<"Character "<<ch<<" is a Uppercase_Alphabet";
    else
        cout<<"Charcter "<<ch<<" is a Special Character";
    getch();
}
///Make this program by using Switch-case
///for that use ASCII table
///Learn switch contious topic/concept
