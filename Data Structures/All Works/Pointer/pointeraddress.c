#include<stdio.h>
void main()
{
int i;
int *p;
p=&i;
printf("Enter The  value for i ");
scanf("%d",&i);
printf("The address of location where i located is %p\n",&i);
printf("The entered value of i is %d ",*p);
}

