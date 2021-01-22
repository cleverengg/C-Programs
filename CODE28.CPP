#include<stdio.h>
#include<conio.h>

void main()

{

int a[3][3],b[3][3],c[3][3],i,j,k;

clrscr();

printf("\n enter the first matrix");
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
scanf("%d",b[i][j]);
}
}
printf("\n multiple of matrix");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
c[i][j]=0;
for(k=0;k<=2;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("%d\t",c[i][j]);
printf("\n");
getch();
}