#include<iostream>
#include<conio.h>
using namespace std;
struct Time
{
private:
    int hr;
    int min;
    int sec;
public:
    void set_Time(int hr,int min,int sec)
    {
        if(hr<0 || min<0 || sec<0) ///Imp--->Now this variable will be consider as formal arguments variable
            cout<<"Enter a valid input"<<endl;
        else
        {
            this->sec=sec%60;
            min+=sec/60; //adding quotient of second/60 to min (formal arguments variable)
            this->min=min%60;
            hr+=min/60;
            this->hr=hr%24;
        }
    }
    void Display_Time()
    {
        cout<<"Time is "<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
    }
};
int main()
{
    struct Time t1;
    Time t2,t3;
    cout<<"t1"<<endl;
    t1.set_Time(98,75,83);
    t1.Display_Time(); ///This is wrong Output

    cout<<"t3"<<endl;  ///How can we print object name inside a function of  a class ?
    t3.set_Time(23,59,121);  //Output should be 00:01:01
    t3.Display_Time();

    cout<<"t2"<<endl;
    t2.set_Time(-48,27,94);
    t2.Display_Time();///this is wrong Output
    getch();
    return 0;
}

/*
#include<iostream>
#include<conio.h>
using namespace std;
struct Time
{
private:
    int hr;
    int min;
    int sec;
public:
    void set_Time(int hr,int min,int sec)
    {
        if(hr<0 || min<0 || sec<0) ///Imp--->Now this variable will be consider as formal arguments variable
            cout<<"Enter a valid input"<<endl;
        else
        {
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }
    }
    void Display_Time()  //this function should be call when and when only set_function is called before that.Acc. to me for this we will use constructor to set the value at the time of creation of an object ///see the ds code
    {
        cout<<"Time is "<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
    }
};
int main()
{
    struct Time t1;
    Time t2;
    t1.set_Time(98,75,83);
    t1.Display_Time(); ///This is wrong Output
    t2.set_Time(-48,27,94);
    t2.Display_Time();///this is wrong Output
    getch();
    return 0;
}
*/

/*
#include<iostream>
#include<conio.h>
using namespace std;
struct Time
{
private:
    int hr;
    int min;
    int sec;
public:
    void set_Time(int hr,int min,int sec)
    {
        this->hr=hr;  //Why we can't use this line code ---> this.hr=hr; --->this line code gives an error
        this->min=min;
        this->sec=sec;
    }
    void Display_Time() //Note Time can't be negative ---> solve this(B'coz user can enter an invalid time)
    {
        cout<<"Time is "<<hr<<"hr "<<min<<"min "<<sec<<"sec "<<endl;
    }
};
int main()
{
    struct Time t1;
    Time t2;
    t1.set_Time(98,75,83);
    t1.Display_Time(); ///This is wrong Output
    t2.set_Time(-48,27,94);
    t2.Display_Time();///this is wrong Output
    getch();
    return 0;
}
*/
