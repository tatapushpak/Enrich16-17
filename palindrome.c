#include<stdio.h>
int main()
{
    int num,i,sum=0,p,r;
    printf("enter the number:");
    scanf("%d",&num);
    p=num;
    for(i=0;i<=num;i++)
    {
        r=num%10;
        num=num/10;
        sum=(sum*10)+r;
    }
    if(p==sum)
    {
        printf("\n the given number is an palindrome");
    }
    else
    {
        printf("\n the given number is Not an palindrome");
    }
    return 0;
}
    
