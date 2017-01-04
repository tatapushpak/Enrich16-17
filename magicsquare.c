#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    static int a[50][50];
    int i,j,b;
    i=0;
    j=n/2;
    b=1;
    while(b<=n*n)
    {
        a[i][j]=b;
        i--;
        j=(j+1)%n;
        if(i==-1)
           i=n-1;
           
        if(a[i][j]!=0)
        {
           j--;
           i=(i+2)%n;
           if(j==-1)
             j=n-1;
        }
        b++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
	return 0;
}
