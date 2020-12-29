#include<stdio.h>
void main()
{
int n=0,a[n],i;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("The elements of Array are \n");
for(i=0;i<n;i++)
{
 printf("a[%d]=%d\n",i,a[i]);
}
}
