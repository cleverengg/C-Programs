#include<stdio.h>
#include<conio.h>

void main()

{

int rev=0,rem,n,b;
clrscr();

printf("\n enter the value of n");
scanf("%d",&n);

b=n;

while(n>0)

{

rem=n%10;
rev=rev*10+rem;
n=n/10;

}

if (rev==b)

{

printf("\n pallindrome no");

}
else
{
printf("\n not a pallindrome no");

}

getch();

}