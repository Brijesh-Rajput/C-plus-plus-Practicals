#include<iostream>
#include<conio.h>
using namespace std;
class Result
{
private:
    //NOT this int resulted; ---> it's not an instance variable.
    int total_attempt,net_right,net_wrong,marks_for_right,marks_for_wrong;
public:
    Result()
    { total_attempt=0; net_right=0; net_wrong=0; marks_for_right=0; marks_for_wrong=0; }
    void setResult(int total_attempt,int net_right,int net_wrong,int marks_for_right=4,int marks_for_wrong=1)  //We have use default argument concept here
    { this->total_attempt=total_attempt;
      this->net_right=net_right;
      this->net_wrong=net_wrong;  //Or (*this).net_wrong=net_wrong;
      this->marks_for_right=marks_for_right;
      this->marks_for_wrong=marks_for_wrong;
    }
    void showResult(){ cout<<"Total Attempt ="<<total_attempt<<endl<<"Net Right ="<<net_right<<"\n"<<"Net Wrong ="<<net_wrong<<endl<<"marks for right ="<<marks_for_right<<"\nmarks for wrong ="<<marks_for_wrong<<endl; }

   //By me:-
    void Resulted()
    {
        if(net_right>net_wrong)
            cout<<"Congratulations! \n You pass the Exam with "<<marks_for_right*net_right<<" marks"<<endl;
        else
            cout<<"You Failed"<<endl;
    }
};
int main()
{
    Result r1;
    r1.showResult();
    cout<<endl;

    r1.setResult(15,10,5); //this function takes 5 arguments
    r1.showResult();

    r1.Resulted();

    getch();
}
