#include<stdio.h>
#include<conio.h>

void main()

{

int week;
clrscr();

printf("\n enter week number");
scanf("%d",&week);
switch(week)

{

case1:
printf("monday");
break;
case2:
printf("tuesday");
break;
case3:
printf("wednesday");
break;
case4:
printf("thursday");
break;
case5:
printf("friday");
break;
case6:
printf("saturday");
break;
case7:
printf("sunday");
default:
printf("no valid days");
}
getch();
}