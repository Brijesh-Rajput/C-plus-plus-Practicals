//Write a C++ program to calculate average of three numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,sum;  //NOTE:- No need to initialize sum variable with zero
    float avg;
    printf("Enter three numbers :\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3.0;     //Or  avg=float(sum/3);
    printf("Average of three numbers is %f",avg);
    getch();
}
