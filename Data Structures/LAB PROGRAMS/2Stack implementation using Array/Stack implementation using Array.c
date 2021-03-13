#include<stdio.h>
#include<stdlib.h>
#define N 5
int top=-1,s[N];
void push();
void pop();
void display();
void main()
{
  int c;
  while(1)
   { 
  printf("Operations of Stack\n"); 
  printf("\n1.push\n2.Pop\n3.Display\n4.Exit\n");
  printf("\nEnter the choice\n");
  scanf("%d",&c);
  switch(c)
        {
         case 1: push();
                 break;
         case 2: pop();
                 break;
         case 3: display();
                 break;
         case 4: exit(0);
         
        default: printf("\n Entered choice is wrong\n"); 
        }
     }
}
 
void push()
  {
  int i;
  if(top==N-1)
    {
     printf("The stack is full\n");
    }
  else
    { 
     printf("Enter the element want to push\n");
     scanf("%d",&i);
     top=top+1;
     s[top]=i;
    }
  }
void pop()  
  {
  if(top==-1)
    {
    printf("The stack is empty\n");
    }
  else
    {   
     printf("\nThe poped element is %d\n",s[top]);
     top=top-1;
    }
   }

void display()
   {
   int x;
   if(top==-1)
    {
    printf("The stack is empty\n");
    }
  else
  {
   for(x=top;x>=0;x--)
     {
     printf("%d  ",s[x]);
     }
   }
   }

