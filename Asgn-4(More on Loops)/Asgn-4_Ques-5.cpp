//Write a C++ program to calculate HCF(or GCF or GCD) of two numbers
//LCM:- Least Common Multiplication
//HCF:- Highest Common Factor
//GCF:- Greatest Common Factor
//GCD:- Greatest Common Divisor
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter two numbers ";
    int x,y;
    cin>>x>>y;

    //Finding HCF using 1st method
    if(x==y)
        cout<<"HCF of two number "<<x<<" and "<<y<<" is "<<x<<endl;
    else
    {
        if(x>y)
        {
            //swap the values
            int temp=x;
            x=y;
            y=temp;
        }
        int HCF_of_two_Number;                                            //Think why i have written this condition in for-loop
        for(HCF_of_two_Number=x;HCF_of_two_Number>1;HCF_of_two_Number--) //NOTE the FOR-LOOP condition
            if(x%HCF_of_two_Number==0 && y%HCF_of_two_Number==0)           ///Very Imp
                break;
        cout<<"HCF of two number "<<x<<" and "<<y<<" is "<<HCF_of_two_Number<<endl;
        ///Note :- when x contains value which is greater than y then swapping will perform. Due to which contains of x and y will change.
    }

    getch();
    return 0;
}
/*
user will enter 36 and 24 Then user will get this below output
HCF of two number 24 and 36 is 12
NOT this ---->HCF of two number 36 and 24 is 12
*/


///There are two method to find the HCF of two numbers :-
/
for e.g:-
 1. Hcf of two number 24 and 36 is 12
    24 :- 2,2,2,3
    36 :- 2,2,3,3
 2. Hcf of two number 35 and 55 is 5
    35 :- 5,7
    55 :- 5,11
 3. HCf of two prime number is 1
 4. Hcf of two same numbers is that given number
 5. LCM of two same numbers is that given number
/// 6. Hcf or GCF(k,0) = k   For e.g:- Hcf of 0 and 5 is 5 AND Hcf of 9 and 0 is 9 NOT ZERO
                             ///Very IMP
 6. HCF of negative numbers is what ?

1st Method:- firstly we will take smallest no. from the given two numbers then
             Inside a Loop, we will check whether that number is divisible by both numbers or not ?
             If not then decrement that number and then we will check again.(Decrement upto 1)
             This loop will execute untill the hcf not found OR that number which is divisible by both.
2nd Method :- BY GCD Method(eculid's Method)
*/
