#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
private:
    int hr,min,sec;
public:
    void setTime(int hr,int min,int sec){ this->hr=hr; this->min=min; this->sec=sec; }
    void showTime(){ cout<<"Time is "<<hr<<"hr "<<min<<"min "<<sec<<"sec"<<endl; }
    void NormalizeFunction()
    {//To normalize the object data
        //For e.g:- min & sec <60 AND  me:- hr<24

        min+=sec/60;
        sec=sec%60; //sec%=60;
        hr+=min/60;
        min%=60;
        hr%=24;

        /*WRONG CODE
        sec=sec%60; //sec%=60;
        min+=sec/60;
        min%=60;
        hr+=min/60;
        hr%=24;
        */
        showTime();     ///How an object is calling another instance function inside the instance member function?
    }
    void Addition(Time t1,Time t2)
    {
        sec=t1.sec+t2.sec;
        min=t1.min+t2.min;
        hr=t1.hr+t2.hr;
        NormalizeFunction();
    }
    Time Subtraction(Time t1) //Note Time can't be negative
    {
        int Total_object1_sec=sec+min*60+hr*60*60;
        int Total_object2_sec=t1.sec+t1.min*60+t1.hr*60*60;

        int Difference_in_sec=Total_object1_sec-Total_object2_sec;

        Time t;
        if(Difference_in_sec==0)
        {
            cout<<"Difference is Zero"<<endl;
            return t;
        }
        else if(Difference_in_sec>0)
        {
            cout<<"Time will be positive. Total_Sec="<<Difference_in_sec<<endl;
            t.min=Difference_in_sec/60;
            t.sec=Difference_in_sec%60;
            t.hr=t.min/60;
            t.min=t.min%60;
            t.hr=t.hr%24;
            return t;
        }
        else
            cout<<"Time will be Negative AND Time can't be negative"<<endl;
    }
};
main()  ///Note:- I have not written int return type.
{///In C++,if return type is not mention of a function then bydefault it will be consider as int return type.

    Time t1,t2,t3;
    t1.setTime(69,54,67);
    t2.setTime(70,19,81);

    //
    t1.showTime();
    t2.showTime();

    //Normalize
    t1.NormalizeFunction();
    t2.NormalizeFunction();

    t3.Addition(t1,t2);

    t3=t1.Subtraction(t2);
    t3.showTime();

    getch();
}
