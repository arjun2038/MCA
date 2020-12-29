#include<stdio.h>
void main()
{
int num,s,rev=0;
printf("Enter the number for reverse\n");
scanf("%d",&num);
while(num!=0)
{
s=num%10;
rev=rev*10+s;
num=num/10;
}
printf("The reverse  is = %d",rev);
}
