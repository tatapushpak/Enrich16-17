#include <stdio.h>
#include <string.h>
int main() 
{
    char s[1000];
    int a[26]={0};
    int n,i,k;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        a[s[i]-'a']++;
    }
    k=0;
    for(i=0;i<26;i++)
    {
        if(a[i]%2!=0)
          k++;
        if(k==2)
         break;
    }
    if(k==2)
      printf("false");
    else
      printf("true");
	// your code goes here
	return 0;
}


