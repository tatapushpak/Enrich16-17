#include <stdio.h>

int main(void) 
{
    long long int n,rev=0;
    scanf("%lld",&n);
    while(n>0)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    printf("the reverse is = %d",rev);
    	return 0;
}
