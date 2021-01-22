#include<stdio.h>
#include<conio.h>

void main()

{

int a[5],i;

clrscr();

printf("\n enter elements in an array");
for(i=0;i<=4;i++)

{

scanf("%d",&a[i]);
}

printf("elements are in array");

for(i=0;i<=4;i++)

{

printf("%d \n",a[i]);

}

getch();

}