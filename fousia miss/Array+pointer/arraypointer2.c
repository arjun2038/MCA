#include <stdio.h>
void main() 
{
  int i,x[7],sum=0;
  printf("Enter 7 numbers:\n ");
  for(i=0;i<7;++i) 
     {
      scanf("%d",x[i]);
      sum+=*(x+i);
     }
 printf("Sum = %d", sum);
}

