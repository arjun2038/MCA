#include<stdio.h>
#include<stdlib.h>
#define N 5
int front=rear=-1;
in a[N];
void main()
{
int choice;
while(1)
{
printf("\nOperations On Queue\n");
printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n);
printf("Enter Your Choice");
scanf("%d".&choice);
switch(choice)
{
case 1:enqueue();
       break;
case 2:dequeue();
       break;
case 3:display();
       break;
case 4:exit(0);
       break;
default:printf("Entered Choice is Wrong,Please Re-enter");
       break;
}
}
}
enqueue()
{
if(
}
