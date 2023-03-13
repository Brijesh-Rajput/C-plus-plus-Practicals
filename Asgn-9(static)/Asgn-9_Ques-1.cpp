///Cnf this assignment
#include<iostream>
#include<conio.h>
using namespace std;
class Account
{
private:
    int account_no;
    float balance;
    static float rate_of_interest;
public:
  Account(){account_no=0; balance=0;}
  void setBalance(float balance){this->balance=balance;}
  void setAccountNo(int account_no){this->account_no=account_no;}
  float getBalance(){return balance;}
  int getAccountNo(){return account_no;}
  static void setRateOfInterest(float x){rate_of_interest=x;}
  static float getRateOfInterest(){return rate_of_interest;}

  //by_me:-
  void DisplayCustomer()
  {cout<<"Account "<<getAccountNo()<<" Balance "<<getBalance()<<" RateOfInterest "<<rate_of_interest<<endl;}
};
float Account::rate_of_interest=0; //By this line --> static variable will create for a class. if this defination is not written then static variable will not create.
//Here,we can set the value of RateOfInterest
//For e.g:-float Account::rate_of_interest=0.03;
int main()
{
    Account a1;
    a1.setAccountNo(2456);
    a1.setBalance(10650.875);
    a1.setRateOfInterest(0.35);

    a1.DisplayCustomer();

    getch();
}
