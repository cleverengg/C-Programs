#include<stdio.h>
#include<conio.h>

int sum(int,int);//function declaration
void main()
{
int a,b,c;
clrscr();
printf("\n enter the value of a & b");
scanf("%d %d", &a,&b);
c=sum(a,b);//function call
printf("sum=%d\n",c);
getch();
}
int sum(int a,int b)//function defination
{
return(a+b);
}