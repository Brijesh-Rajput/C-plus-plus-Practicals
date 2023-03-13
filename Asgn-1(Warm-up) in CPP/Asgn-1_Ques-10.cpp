//Write a C++ program to calculate Simple interset
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter Principal_Amount,Rate_of_interset(Not in %),Time_Period(in yr) "<<endl;
    int Principal_Amount,Rate_of_interset;
    float Time_Period;
    cin>>Principal_Amount>>Rate_of_interset>>Time_Period;
    cout<<"Simple interest is "<<Principal_Amount*Rate_of_interset*Time_Period/100.0;
    getch();
}

///Typedef is use for what ?
///It is only for naming datatype whether datatype is userdefined or predefined
///How can i naming the variable ? As in above problem --->name of the variable is too long---> Rate_of_interset
