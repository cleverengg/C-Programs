#include<stdio.h>
#include<conio.h>

void main()

{

int i,j,q[3][3];

clrscr();

printf("\n enter the elements in matrix");
for(i=0;j<=2;i++)

{

scanf("%d",&q[i][j]);
}

printf("\n transpose elements of matrix is");
for(j=0;j<=2;j++)
{
{

printf("%d\t",&q[i][j]);

}

printf("\n");

}

getch();

}