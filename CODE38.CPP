#include<stdio.h>
#include<conio.h>

int fact(int);//function declaration
void main()

{

int n,fac;

clrscr();

printf("\n enter the value of n");
scanf("%d",&n);
fac=fact(n);//function call
printf("factorial of a given no=%d\n",fac);
getch();
}
int fact(int n)//function defination
{
if(n==0)
return(1);
else
return(n* fact(n-1));
}