#include<stdio.h>
# define N 3
void main()
{
int i,x[]={5,7,9};
int *p=x;
for(i=0;i<N;i++)
{
printf("the value %d is at %p\n",*p,p);
p++;
}
}
