#include<stdio.h>
#include<conio.h>

void main()

{

int a[3][3],b[3][3],c[3][3],i,j;

clrscr();

printf("\n enter the elements in 1st matrix");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n enter the elements in 2nd matrix");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\n addition operator");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\n final matrix is");
for(i=0;i<=2;i++);
{
for(j=0;j<=2;j++);
{
printf("%d\t",c[i][j]);
}
printf("\n");

}

getch();
}
