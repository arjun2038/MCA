#include<stdio.h>
#include<stdlib.h>
# define N 5
void pop();
void push();
void display();
int top=-1;
int a[N];
void main()
{
int choice;
while(1)
{
printf("\nThe Operations in stack\n");
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
printf("\n Enter Your Choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:exit(0);
       break;
default:printf("Entered Choice is Wrong,Please Re-enter\n"); 
} 
}
}
void push()
{
int item;
if(top==N-1)
{
printf("\nStack is Full\n");
}
else
{
top++;
printf("Enter the Element Want to push\n");
scanf("%d",&item);
a[top]=item;
}
}
void pop()
{
if(a[top]==-1)
{
printf("The Stack is Empty\n");
}
else
{
printf("The Poped Elementt is %d \n ",a[top]);
top--;
}
}
void display()
{
int i;
if(a[top]==-1)
{
printf("The Stack is Empty\n");
}
else
printf("The Elemnts of Stack are \n");
{
for(i=top;i>-1;i--)
{
printf("%d\t",a[i]);
}
}
}
