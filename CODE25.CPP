#include<stdio.h>
#include<conio.h>

void main()
{

int a[5],i,large;
clrscr();

printf("\n enter the elements in an array");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}

large=a[0];
for(i=0;i<=4;i++)
{
if(a[i]>large)
{
large=a[i];
}
}
printf("\n large element in an array=%d",large);
getch();
}