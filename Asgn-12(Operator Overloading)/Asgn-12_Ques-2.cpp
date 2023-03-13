#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
private:
    int hr,min,sec;
public:
    Time() { hr=0; min=0; sec=0; }
    void setTime(int hr,int min,int sec){ this->hr=hr; this->min=min; this->sec=sec; }
    void showTime(){ cout<<"Time is "<<hr<<"hr "<<min<<"min "<<sec<<"sec"<<endl; }
    void NormalizeFunction()
    {
        min+=sec/60;
        sec=sec%60; //sec%=60;
        hr+=min/60;
        min%=60;
        hr%=24;
        //showTime();
    }
    Time operator+(Time t)
    {
        Time temp;
        temp.sec=sec+t.sec;
        temp.min=min+t.min;
        temp.hr=hr+t.hr;
        temp.NormalizeFunction();
        return temp;
    }
    Time operator-(Time t) //Note Time can't be negative
    {
        int Total_object1_sec=sec+min*60+hr*60*60;
        int Total_object2_sec=t.sec+t.min*60+t.hr*60*60;

        int Difference_in_sec=Total_object1_sec-Total_object2_sec;

        Time temp;
        if(Difference_in_sec<0)
            Difference_in_sec=-Difference_in_sec;
        temp.min=Difference_in_sec/60;
        temp.sec=Difference_in_sec%60;
        temp.hr=temp.min/60;
        temp.min=temp.min%60;
        temp.hr=temp.hr%24;
        return temp;
    }
    int operator>(Time t)
    {
        if(hr==t.hr)
        {
            if(min==t.min)
            {
                if(sec==t.sec)
                    return -1;  //I have consider that, if both time is same then -1 will return by this greater than(>) symbol
                else if(sec>t.sec)
                    return 1;
                else
                    return 0;
            }
            else if(min>t.min)
                return 1;
            else
                return 0;
        }
        else if(hr>t.hr)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(69,54,67);
    t2.setTime(70,19,81);

    t1.NormalizeFunction();
    t2.NormalizeFunction();

    t3=t1+t2;
    t3.showTime();

    t3=t1-t2;
    t3.showTime();

    cout<<t1.operator>(t2); //This is not working :- cout<<t1>t2; Why?

    cout<<(t1>t2);

    cout.operator<<(t1>t2);

    getch();
}
/*
    int operator>(Time t)
    {
        if(hr<t.hr)
            return 0;
        else if(hr>t.hr)
            return 1;
        else //hr==t.hr Both are same
        {
            if(min<t.min)
                return 0;
            else if(min>t.min)
                return 1;
            else //min==t.min  Both are same
            {
                if(sec<t.sec)
                    return 0;
                else if(sec>t.sec)
                    return 1;
                else
                    return -1; //As Both time is same
            }
        }
    }
*/
