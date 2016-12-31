#include<stdio.h>
void main()
{
	int a[20],i,num,n,c=0;
	printf("enter the number of elements in an array:");
	scanf("%d",&n);
    printf("enter the number to be searched in an array:");
	scanf("%d",&num);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==num)
		{
			c++;
		}
	}
	printf("the given number %d is %d times repeated",num,c);
} 
