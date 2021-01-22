#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()

{

int a, b, c, d;
float x1,x2;
clrscr();

printf("\n enter the value of a,b,&c");
scanf("%d%d",&a,&b);
d=b*b-4*a*c;
if(d>=0)
{


x1=(-b+sqrt(d))/2.0*a;
x2=(-b-sqrt(d))/2.0*a;
printf("x1=%f x2=%f",x1,x2);
 }

else
{
printf("\n roots are imaginary");
 }
getch();

}