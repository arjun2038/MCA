#include<stdio.h>
void main()
{
int a[20],b[20],i,n;
printf("Enter the size of  array\n");
scanf("%d",&n);
printf("Enter the elements of first array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The first array is\n");
for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
}
printf("The second array is\n");
for(i=0;i<n;i++)
{
printf("b[%d]=%d\n",i,b[i]);
}
}
