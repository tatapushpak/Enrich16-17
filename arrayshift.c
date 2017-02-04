#include <stdio.h>

int main(void) {
    int a[10],i,n,b;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter number of elements to be shifted:");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i+b<n)
        {
            a[i]=a[i+b];
        }
        else
        {
            a[i]=0;
        }
    }
    for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    
	// your code goes here
	return 0;
}

