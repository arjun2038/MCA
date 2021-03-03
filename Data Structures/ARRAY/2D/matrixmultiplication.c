#include<stdio.h>
void main()
{
int a[10][10],b[10][10],m[10][10],i,j,k,r1,r2,c1,c2,z=0,c,r;
printf("Enter the number of columns and rows of the matrix 1\n");
scanf("%d %d",&r1,&c1);
printf("Enter the number of columns and rows of the matrix 2\n");
scanf("%d %d",&r2,&c2);
if(r2!=c1)
   {
   printf("It is not possible to multiply these matrices\n");
   }
else
   {
   printf("Enter the elements of the first matrix\n");
   for(i=0;i<r1;i++)
      {
      for(j=0;j<c1;j++)
        {
        scanf("%d",&a[i][j]);
        }
      }
    
   printf("Enter the elements of the second matrix\n");
   for(i=0;i<r2;i++)
      {
      for(j=0;j<c2;j++)
        {
        scanf("%d",&b[i][j]);
        }
      }
   r=r1;
   c=c2;
   printf("The Multiplied matrix is\n");
   for(i=0;i<r;i++)
      {
      for(j=0;j<c;j++)       
        {
         for(k=0;k<r2;k++)
           {  
           z=z+a[i][k]*b[k][j];
           }
       m[i][j]=z;
       z=0;
       }      
      }
   for(i=0;i<r;i++)
      {
      for(j=0;j<c;j++)
          {
          printf("m[%d][%d]=%d\n",i,j,m[i][j]);
          }
       }
   }
}
