#include<stdio.h>
#include<conio.h>

void main()

{

int i,n,c=0;
clrscr();

printf("\n enter the value of n");
scanf("%d",&n);

for(i=2;i<=n/2;i++)
{
if(n%i==0)
c++;
break;
}
if(c==0)
{
printf("\n prime no");
}
else
{
printf("\n not a prime no");
}
getch();
}

