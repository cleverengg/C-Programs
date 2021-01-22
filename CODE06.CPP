#include<stdio.h>
#include<conio.h>

void main()
{
int r,h;
float volume;
clrscr();
printf("\n enter the value of r,h");
scanf("%d %d",&r,&h);

volume=3.14*r*r*h;

printf("volume of cylinder=%f",volume");
getch();

}