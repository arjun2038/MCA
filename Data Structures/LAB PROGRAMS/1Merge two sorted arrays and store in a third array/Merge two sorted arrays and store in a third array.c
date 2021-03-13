#include<stdio.h>
void main()
{

int temp,i,j,k,a[10],b[10],c[20],m,n;
printf("What is the Size of First Array?\n");
scanf("%d",&m);
printf("Enter the elements of first Array\n");
for ( i = 0; i < m; i++)
{
    scanf("%d",&a[i]);
}
printf("What is the Size of Second Array?\n");
scanf("%d",&n);
printf("Enter the elements of Second Array\n");
for ( j = 0; j < n; j++)
{
    scanf("%d",&b[j]);
}
printf("The Sorted First Array is:\n");
for(i=0;i<m-1;i++)
{
	for(k=i+1;k<m;k++)
	{
		if(a[i]>a[k])
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
	}
}
for(i=0;i<m;i++)
{
	printf("%d\t",a[i]);
}
printf("\nThe Sorted Second Array is:\n");
for(j=0;j<n-1;j++)
{
	for(k=j+1;k<n;k++)
	{
		if(b[j]>b[k])
		{
			temp=b[j];
			b[j]=b[k];
			b[k]=temp;
		}
	}
}
for(j=0;j<n;j++)
{
	printf("%d\t",b[j]);
}
//The merged two sorted array
for(i=0;i<m;i++)
{
	c[i]=a[i];
}
for(j=0,k=m;k<m+n;k++,j++)
{
	c[k]=b[j];
}
printf("\nThe Merged Two Sorted Arrays\n");
for(i=0;i<m+n;i++)
{
printf("%d\t",c[i]);
}
}

