#include<stdio.h>
#include<conio.h>
int sum(int *,int *);_//function declaration
void main()
{
int a,b;
printf("\n enter the value of a & b");
scanf("%d%d",&a,&b);
sum(&a,&b);
}
int sum(int *p,int *q)
{
int s;
s=*p+*q;
printf("sum=%d\n",s);
getch();
return 0;
}
