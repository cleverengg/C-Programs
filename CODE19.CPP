#include<stdio.h>
#include<conio.h>

void main()

{

int n,fact=1,i=1;

clrscr();

printf("\n enter the value of n");
scanf("%d",&n);

do

{

fact=fact*i;
i++;
}

while(i<n);
printf("factorial=%d\n",fact);

getch();

}