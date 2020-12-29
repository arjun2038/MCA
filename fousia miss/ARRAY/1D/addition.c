#include<stdio.h>
void main()
{
int n=0,a[1000],i,sum=0;
printf("The number of numbers to Add\n");
scanf("%d",&n);
printf("Enter numbers to Add\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("The sum of the numbers is =%d\n",sum);
}

