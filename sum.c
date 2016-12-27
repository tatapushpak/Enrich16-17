#include<stdio.h>
void main()
{
  int n,i,s=0,c;
  printf("enter the number:")';
  scanf("%d",&n);
  while(n!=0)
  {
   i=n%10;
   s+=i;
   n=n/10;
   c++;
 }
 printf("number of digits present are:%d\n",c);
 printf("sum of digits is:%d",s);
 getch();
}
  
   
