#include<stdio.h>
#include<conio.h>
int fac(int);//function prototype
void main()

{

int n;

clrscr();

printf("\n enter the value of n");
scanf("%d",&n);
fac(n);//function call
}
int fac(int n)//function defination
{
int fact=1,i;
for(i=n;i>=1;i--)
{
fact=fact*i;
}
printf("factorial=%d\n",fact);
getch();
return 0;
}