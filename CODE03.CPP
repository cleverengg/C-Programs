#include<stdio.h>
#include<conio.h>

void main()
{

int a,b,temp;

clrscr();


printf("\n enter the value of a & b");
scanf("%d %d",& a, & b);

temp=a;
a=b;
b=temp;

printf("a=%d b=%d",a,b);
getch();

}
