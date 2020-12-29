#include<stdio.h>
void main()
{
int i,j,k,n,m,a[100],b[100],c[200];
printf("Enter no of elements in first array\n");
scanf("%d",&n);
printf("Enter the elements of first Array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter no of elements in Second array\n");
scanf("%d",&m);
printf("Enter the elements of Second Array\n");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}


printf(" the elements of first Array\n");
for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}

printf("the elements of Second Array\n");
for(j=0;j<m;j++)
{
printf("b[%d]=%d\n",j,b[j]);
}


for(k=0,i=0;k<n,i<n;k++,i++)
{
c[k]=a[i];
}

for(k=n,j=0;k<n+m,j<m;k++,j++)

{
c[k]=b[j];
}
printf("the combined array\n");
for(k=0;k<m+n;k++)
printf("c[%d]=%d\n",k,c[k]);
}
