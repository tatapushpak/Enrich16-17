#include<stdio.h>
int main()
{
    int a,b[10],i,j,p;
    printf("enter the number:");
    scanf("%d",&a);
    while(a>0)
    {
        p=a%10;
        b[i]=p;
        a=a/10;
        i++;
    }
    for(j=0;j<=i;j++)
    {
        if(b[j]>b[j+1])
        {
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
        }
     }
     a=0;
    for(j=0;j<=i;j++)
    {
        a=(a*10)+b[j];
    }
    printf("the sorted number is:%d",a);
    return 0;
 }
            
    
