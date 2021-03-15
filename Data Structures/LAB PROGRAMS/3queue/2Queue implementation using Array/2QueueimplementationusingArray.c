#include<stdio.h>
#include<stdlib.h>
#define N 5
int front=-1,rear=-1;
int a[N];
void enqueue();
void dequeue();
void display();
void main()
{
int choice;
while(1)
{
printf("\nOperations On Queue\n");
printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
printf("Enter Your Choice");
scanf("%d",&choice);
switch(choice)
{
case 1: enqueue();
       break;
case 2: dequeue();
       break;
case 3: display();
       break;
case 4: exit(0);
       break;
default: printf("Entered Choice is Wrong,Please Re-enter\n");
       break;
}
}
}
void enqueue()
{
int x;
if(rear==N-1)
{
       printf("Queue is Full\n");
}
else
{
	if(rear==-1)
	{
		front=0;
	}
       rear++;
       printf("Enter the Element want to Enqueue\n");
       scanf("%d",&x);
       a[rear]=x;
}       
}
void dequeue()
{
       if(rear==-1&&front==-1)
       {
              printf("The Queue is Empty\n");
       }
       else
       {
              printf("The Dequeued Element is %d\n ",a[front]);
              front++;
        if(front>rear)
		{
			front=rear=-1;
			  }      
       }

}
void display()
{
	int i;
       if(rear==-1&&front==-1)
       {
              printf("The Queue is Empty\n");
       }
       else
       {
              for(i=front;i<=rear;i++)
              {
                     printf("%d\t",a[i]);
              }
       }
}

