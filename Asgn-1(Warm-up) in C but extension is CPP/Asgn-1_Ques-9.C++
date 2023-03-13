//Write a C++ program which takes a character from user and display its ASCII code

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character :\n");
    scanf("%c",&ch);
    printf("ASCII code of %c is %d",ch,ch);
    getch();
}
