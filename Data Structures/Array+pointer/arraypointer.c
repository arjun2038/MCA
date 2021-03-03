#include<stdio.h>
void main()
{
int i,x[]={1,2,3,4};
for(i=0;i<4;i++)
{
printf("x[%d]=%d\n",i,x[i]);
printf("Address of %d is %p\n",x[i],&x[i]);
}
}
