#include<stdio.h>
#include<conio.h>

int mul(int,int);

void main()

{

int a,b;

clrscr();

printf("\n enter the value of a & b");
scanf("%d %d",&a,&b);
mul(a,b);
}

int mul(int x, int y)
{
int z;
z=x*y;
printf("multiply=%d\n",z);
getch();
return 0;
}