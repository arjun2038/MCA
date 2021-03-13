#include <stdio.h>
void main() 
{
int v=20;
int *p; 
p=&v;
printf("Address of v variable: %p\n",&v);
printf("Address stored in p variable: %p\n",p);
printf("Value of *p variable: %d\n",*p);
}
