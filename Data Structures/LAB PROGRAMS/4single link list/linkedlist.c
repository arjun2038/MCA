#include<stdio.h>
#include <stdlib.h>
void insert();
//void display();
struct node
{
int data;
struct node *next;
};
void main()
{
int choice;
while(1)
{
printf("\nThe operations in Linked List\n");
printf("\n1.Insert\n2.Display\n");
printf("Enter the Choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
       break;
//case 2:display();
       //break;
}
}
}
void insert()
{
struct node **head;
int newdata;
struct node *newnode1=(struct node*)malloc(sizeof(struct node));
newnode1->data=newdata;
newnode1->next=*head;
*head=newnode1;
}

