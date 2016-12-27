#include<stdio.h>
int main()
{
  long long int n,i,s=0;
  printf("enter the number:");
  scanf("%lld",&n);
  for(i=0;n>0;i++,n/=10)
      s+=(n%10);
 printf("number of digits  = %d\n",i);
 printf("sum of digits     =%d",s);
 return 0;
}
