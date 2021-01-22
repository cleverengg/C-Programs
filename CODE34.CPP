#include<stdio.h>
#include<conio.h>
void main()
{
int first,second,next,i,n;
clrscr();
printf("\n enter the value of n");
scanf("%d",&n);
printf("\n enter the value of first & second no");
scanf("%d%d",&first,& second);

for(i=2; i<=n; i++)
{
next=first+second;
first=second;
second=next;
printf("%n",next);
}
getch();
}