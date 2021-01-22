#include<stdio.h>
#include<conio.h>

int swap(int,int);//function prototype

void main()

{

int a,b;
clrscr();
printf("\n enter the value of a & b");
scanf("%d%d",&a,&b);

swap(a,b);//function call
}
int swap(int x,int y)//function defination
{

int temp;
temp=x;
x=y;
y=temp;
printf("after swap a=%d b=%d",x,y);
getch();
return 0;
}