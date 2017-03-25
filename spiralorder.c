#include<stdio.h>
int main()
{
  int a[10][10],i,j,n;
  int c=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      a[i][j]=c++;
      a[i+1][j]=(n*(i-1)+n)=j;
    }
    c=c+n;
  }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }       
        printf("\n");
    }
return 0;
}
