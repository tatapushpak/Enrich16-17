#include<stdio.h>
int main()
{
  int p[10][10],m,n,k,a,b;
  printf("enter m,n,k values:");
  scanf("%d %d %d",&m.&n,&k);
  for(a=0;a<m;a++)
  {
    for(b=0;b<n;b++)
    {
      if((a+b)==k)
      {
        p[a][b]=1;
      }
      else
      {
         p[a][b]=0;
      }
    }
  }
  for(a=0;a<m;a++)
  {
    printf("\n");
    for(b=0;b<n;b++)
    {
      printf("%d",p[a][b]);
    }
  }
}
