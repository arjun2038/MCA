#include<stdio.h>
void main()
{
int i,a[5]={5,6,7,2,3};
int *p;
p=&a[2];
printf("&adrees of *p=%p",p);
printf("&adrees of *(p+1)=%p",(p+1));
printf("&adrees of *(p-1)=%p",p-1);
}
