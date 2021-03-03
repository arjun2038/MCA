#include<stdio.h>
void main()
{
int a[10][10],b[10][10],i,j,r,c;
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
printf("The transpose of the matrix is \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
b[i][j]=a[j][i];
printf("b[%d][%d]=%d\n",i,j,b[i][j]);
}
}
}
