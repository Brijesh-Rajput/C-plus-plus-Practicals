//Write a C++ program to print Hello in the first line and World in the second line

#include<stdio.h>
#include<conio.h>
int helo();

// NOTE:- return type int is not written
//Bydefault return type of a main function is consider as int
main()
{
    printf("Hello\nWorld");
    getch();
    helo();
    return 0;
}
helo()
{
    printf("Hello");
    return 0;
}
