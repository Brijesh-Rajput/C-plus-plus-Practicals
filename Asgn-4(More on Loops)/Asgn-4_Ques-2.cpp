//Write a c++ program to print all Prime number between two given numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter two numbers ";
    int x,y;
    cin>>x>>y;

    if(x==y)
        cout<<"Don't enter a same value "<<endl;
    else
    {
        //x will store always smaller number than y variable
        if(x>y)
        {//swap the values of x and y
            int temp=x;
            x=y;
            y=temp;
        }

        for(int i=x+1;i<y;i++)
        {
            int j;
            for(j=2;j<i;j++)
                if(!(i%j))
                    break;
            if(j==i)
                cout<<i<<" ";
        }
        cout<<endl;
    }

    getch();
    return 0;
}
