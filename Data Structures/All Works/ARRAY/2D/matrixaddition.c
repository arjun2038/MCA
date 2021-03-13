#include<stdio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2;
printf("Enter the number of rows in first matrix\n");
scanf("%d",&r1);
printf("Enter the number of columns in first matrix\n");
scanf("%d",&c1);
printf("Enter the elements of matrix in the binary order\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the number of rows in Second matrix\n");
scanf("%d",&r2);
printf("Enter the number of columns in Second matrix\n");
scanf("%d",&c2);
printf("Enter the elements of matrix in the binary order\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
if(r1!=r2&&c1!=c2)
printf("Cannot add these matrices\n");
else
{
printf("The Sum of two matrix is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("c[%d][%d]=%d\n",i,j,c[i][j]);
}
}
}
}

