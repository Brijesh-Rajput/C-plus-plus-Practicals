//Write a C++ Program to calculate simple interest

#include<stdio.h>
#include<conio.h>
int main()
{
    int p,n;
    float r,si;
    printf("Enter principal amount,rate of interest,period of years(in years):\n");
    scanf("%d%f%d",&p,&r,&n);
    si=p*r*n/100;
    printf("Simple interest is %f",si);
    getch();
}
