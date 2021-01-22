#include<stdio.h>
#include<conio.h>
int swap(int*,int*);//function prototype

void main()
{
int a,b;
clrscr();
printf("\n enter the value of a & b");
scanf("%d%d",&a,&b);
swap(&a,&b);//function call
}

int swap(int*p,int*q)//function defination
{
int temp;
temp=*p;
*p=*q;
printf("value of a=%d,b=%d",*p,*q);
getch();
return 0;
}