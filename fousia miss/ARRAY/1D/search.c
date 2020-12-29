#include<stdio.h>
void main()
{
int a[8]={3,2,3,4,5,6,3,8},i,s,c=0;
for(i=0;i<8;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
printf("Enter the element want to search\n");
scanf("%d",&s);
for(i=0;i<8;i++)
{
if(a[i]==s)
{
printf("The element is found at %d position\n",i);
c=1;
}
}
if(c!=1)
{
printf("The element is not present in the array\n");
}
}



