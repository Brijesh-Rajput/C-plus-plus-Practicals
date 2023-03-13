//Write a C++ program to add two numbers taken from user

#include<stdio.h>
#include<conio.h>
main()
{
    int x,y;
    printf("Enter two numbers ");
    scanf("%d%d",&x,&y);
    printf("Addition of two numbers is %d\n",x+y);
    getch();

    //Taking user input BUT with using comma
    printf("Enter two value and separate it using comma\n");
    scanf("%d , %d",&x,&y); //At the time of inputing value, use comma for separation of two value
    printf("X is %d and Y is %d",x,y);
    printf("\n%d",',');
}
