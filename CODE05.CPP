 #include<stdio.h>
 #include<conio.h>
 #include<math.h>

 void main()
 {

 int a,b,c;

 clrscr();
float s,area;


printf("\n enter the value of a,b & c");
scanf("%d %d %d", &a,&b,&c);

s=(a+b+c)/2.0;

area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%f",area);

getch();

}
