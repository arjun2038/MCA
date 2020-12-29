#include<stdio.h>
void main()
{
int a[50][50],r,c,i,j;
printf("Enter the number of rows\n");
scanf("%d",&r);
printf("Enter The no of columns\n");
scanf("%d",&c);
printf("Enter The elemnts\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}}

printf("The elements of array are\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("a[%d][%d]=%d\n",i,j,a[i][j]);
}}
}
