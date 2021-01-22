#include<stdio.h>
#include<conio.h>

int mul(int *,int *);

void main()
{

int a,b;
clrscr();
printf("\n enter the value of a & b");
scanf("%d%d",&a,&b);
mul(&a,&b);
}
int mul (int *p,int *q)
{
int s=(*p) * (*q);

printf("\n multiply of two no=%d",s);
getch();
return 0;
}