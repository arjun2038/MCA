#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c;
printf("Enter the number of rows in the matrix\n");
scanf("%d",&r);
printf("Enter the number of columns in the matrix\n");
scanf("%d",&c);
printf("Enter the elements of matrix in the binary order\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
if(r==c)
{
printf("The diagonal elements of the matrix is\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(i==j)
{
printf("a[%d][%d]=%d\n",i,j,a[i][j]);
}
}
}
}
else
{
printf("It is not a diagonal matrix\n");
}
}
