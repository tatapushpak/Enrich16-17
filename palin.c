#include<stdio.h>
#include<string.h>
void main()
{
  char a[100];
  int l,flag=0,i=0;
  scanf("%s",&a);
  l=strlen(a);
  for(i=0;i<l/2;i++)
  {
    if(a[i]!=a[(l-1)-i])
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  {
    printf("the string is a palindrome string");
  }
  else
  {
    printf("the string is a palindrome string");
  }
}
