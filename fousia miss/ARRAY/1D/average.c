#include <stdio.h>
void main()
{
int a[100],i,n,sum=0,average;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0; i<n; ++i)
{     
printf("Enter number%d: ",i+1);
scanf("%d",&a[i]);
sum=sum+a[i];
}
average=sum/n;
printf("Average = %d",average);
}
