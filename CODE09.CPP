#include<stdio.h>
#include<conio.h>

void main()

{

int a,b,c;

clrscr();

printf("\n enter the value of a,b,& c");
scanf("%d %d %d",&a,&b,&c);

if(a>b&&a>c)
{
printf("largest no=%d",a);

}

else

if(b>c)

{

printf("largest no=%d",b);

}

getch();

}