//Write a C++ program to calculate area of circle

#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    printf("Enter radius of a circle ");
    scanf("%d",&r);
    printf("Area of a circle is %.2f",3.14*r*r); //%.2f used to print only two no.'s after point
    getch();
}
