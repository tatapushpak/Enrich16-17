#include <stdio.h>
#include<string.h>
void main() {
	char s[20];
	int l,i,j,count,p=0;
	printf("enter a string:");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	    count=1;
	    for(j=i+1;j<l&&s[i]!='0';j++)
	    {
	        if(s[j]==s[i])
	        {
	            s[j]='0';
	            count++;
	        }
	    }
	    if(s[i]!='0'&&count%2==1){
	        p++;
	    }
	    if(p>1)
	    {
	        printf("\n false");
	    }
	}
	printf("\n true");
}
