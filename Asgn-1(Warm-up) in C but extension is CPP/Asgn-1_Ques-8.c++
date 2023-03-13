//Write a C++ program to swap values of two int variables

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,t;
    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);
    printf("a=%d and b=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("a=%d and b=%d",a,b);
    getch();
}
