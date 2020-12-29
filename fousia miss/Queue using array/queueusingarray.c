#include<stdio.h>
#include<stdlib.h>
#define N 5
int front=-1,rear=-1,q[N];
void enqueue();
void dequeue();
void display();
void main()
{
int c;
while(1)
  {
printf("The operations on queue\n");
printf("\n1.Enqueue\n2.Dequeue\n3.Display \n");
printf("Enter the choice\n");
scanf("%d",&c);
switch(c)
      {
    case 1:enqueue();
           break;
    case 2:dequeue();
           break;
    case 3:display();
           break;
    case 4:exit(0);    
    
    default: printf("\nEntered choice is wrong");
    
       }
    }
    
}
void enqueue ()

{ 
  int y;
  printf("Enter the element to add in Queue\n");
  scanf("%d",&y);
  if(rear==N-1)
    {
    printf ("Queue is full\n");
    }
  else if(front==-1&&rear==-1)
    {
      front=rear=0;
      q[rear]=y; 
    }
  else
    {
    rear++;
    q[rear]=y;
    }
}
void dequeue()
{
 if(front==-1&&rear==-1)
    {
    printf("The queue is empty\n");
    }
 else if(front==rear)
    {
    front=rear=-1;
    }
 else
    {
    printf("Element dequeued is %d\n",q[front]);
    front++;
    }
}
void display()
{
  int i;
  if(front==-1&&rear==-1)
    {
    printf("queue is empty\n");
    }
  else
   {
  for(i=front;i<rear-1;i++)
   {
  printf("%d  \n",q[i]);
   }
   }
}

