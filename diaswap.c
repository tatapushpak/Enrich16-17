#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],m,n,i,j,temp;
	printf("enter the number of rows and columns:");
	scanf("%d %d",&m,&n);
	printf("\n enter the matrix elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0,j=n-1;i<m;i++,j--)
	{
		temp=a[i][j];
		a[i][j]=a[i][i];
		a[i][i]=temp;			
	}
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d \t",a[i][j]);
		}
	}
}
