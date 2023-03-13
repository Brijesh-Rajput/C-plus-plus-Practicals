//Write a C++ program to calculate area of a rectangle


/*
#include<stdio.h>
#include<conio.h>
int main()
{
    int l,b;
    printf("Enter length and breadth of a rectangle : ");
    scanf("%d%d",&l,&b);
    printf("Area of a rectangle is %d",l*b);
    getch();
    return 0;
}
/*
//NOTE:-
If return type of main function is non-int type then this below error will come
ERROR: '::main' must return 'int'
*/

/*
//For Example:-void return type
#include<stdio.h>
#include<conio.h>
void main()
{
    int l,b;
    printf("Enter length and breadth of a rectangle : ");
    scanf("%d%d",&l,&b);
    printf("Area of a rectangle is %d",l*b);
    getch();

}
ERROR: '::main' must return 'int'
*/


//float return type
#include<stdio.h>
#include<conio.h>
float main()
{
    int l,b;
    printf("Enter length and breadth of a rectangle : ");
    scanf("%d%d",&l,&b);
    printf("Area of a rectangle is %d",l*b);
    getch();
    return 0.8;
}
ERROR: '::main' must return 'int'

