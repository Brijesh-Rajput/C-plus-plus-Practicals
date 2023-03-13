//Write a C++ program to calculate volume of a cuboid

#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b,h;
    printf("Enter length,breadth and height of a cuboid :\n");
    scanf("%d%d%d",&l,&b,&h);
    printf("Volume of a cuboid is %d",l*b*h);
    getch();
}
