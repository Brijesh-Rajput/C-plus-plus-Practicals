#include<iostream>
#include<conio.h>
using namespace std;
class Array
{
private:
    int arr[10]; //instance member variable B'coz:- static keyword is not used before declaration of an array
public:
    Array()
    {
        for(int i=0;i<10;i++)
            arr[i]=0;
    }
    void inputArrayElements(int*,int); //Now this function will not be consider as an inline function b'coz it is define outside the class
    int findMaxElement()
    {
        int max=arr[0];
        for(int i=1;i<10;i++)
            if(max<arr[i])
                max=arr[i];
        return max;
    }
    int findMinElement()
    {
        int min=arr[0];
        for(int i=1;i<10;i++)
            if(min>arr[i])
                min=arr[i];
        return min;
    }
    void sort() //as this function request to make it inline function But as it contain loop so it gives a warning. Lets check it!
    {
        //Bubblesort
        for(int r=1;r<10;r++)
            for(int i=0;i<10-r;i++)
                if(arr[i]>arr[i+1]) //instance variable arr will be consider of caller object
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
        cout<<"Array is sorted successfully"<<endl;
        for(int i=0;i<10;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    void editElement(int index,int newData)
    {
        if(index<0 || index>9)
            cout<<"Enter a Valid Index"<<endl;
        else
        {
             arr[index]=newData;
             cout<<"Array is successfully edited"<<endl;
        }
    }
    int sumOfElements()
    {
        int sum=0;
        for(int i=0;i<10;i++)
            sum+=arr[i];
        return sum;
    }
    float averageOfElements()
    {
        float average=sumOfElements()/10.0;
        return average;
        ///this is an error ----> return float average=sumOfElements()/10.0;
    }
};
//inputArrayElements() === AppendElements()
//we will consider that Element will be insert as an array. we are not making an append function
void Array::inputArrayElements(int *arr,int size)
{
    if(size>10)
        cout<<"Size of an array must be 10"<<endl;
    else
    {
        for(int i=0;i<size;i++)
            *(this->arr+i)=arr[i];    //Or  this->arr[i]=arr[i];  ///Which has more priority ? arrow operator or square bracket.
        cout<<"Array Elements are successfully input"<<endl;
    }
}
int main()
{
    int a[]={10,-78,16,48,94,28,73,98,64,51};
    class Array a1;
    a1.sort(); //Array contains 0 only
    a1.inputArrayElements(a+0,10);
    cout<<"Max is "<<a1.findMaxElement()<<endl;
    cout<<"Min is "<<a1.findMinElement()<<endl;
    cout<<"Sum is "<<a1.sumOfElements()<<endl;
    cout<<"Average is "<<a1.averageOfElements()<<endl;
    a1.sort();
    getch();
}

