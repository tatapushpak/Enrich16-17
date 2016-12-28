#include<stdio.h>
#include<math.h>

int main(void) 
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i=pow(10,5-m);
	int sum=(n%i)*pow(10,m);
	sum+=(n/pow(10,5-m));
	printf("%d",sum);
	return 0;
}
