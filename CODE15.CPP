#include<stdio.h>
#include<conio.h>

void main()

{

int n,fact=1,i=1;

clrscr();

printf("\n enter the value of n");
scanf("%d",&n);

while(i<=n)

{

fact=fact*i;

i++;

}

printf("factorial=%d\n",fact);

getch();

}

//For While Decrement(>)(--)
//For While Increment(++)(<)