#include<stdio.h>
void main()
{
int x=10;
int *ptr;
ptr=&x;
printf("The value %d present at the address location %p\n",*ptr,&x);
}
