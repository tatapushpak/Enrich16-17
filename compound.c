#include <stdio.h>
float si(int ,int ,float );
float ci(int ,int ,float ,int );
int p,n,b;
float r,i=0,in=0;
int main(void) {
    printf("\n enter the principle: \n no.of months:\n rate of int:\n num of quaters:");
    scanf("%d %d %f %d",&p,&n,&r,&b);
    i=si(p,n,r);
    in=ci(p,n,r,b);
    printf("\n the simple interest:%f",i);
    printf("\n the compound interest:%f",in);
	return 0;
}
float si(int a,int b,float c)
{
    float i;
    i=((a*b*c)/1200);
    return i;
}
float ci(int a,int b,float c,int d)
{
    int j;
    p=p+i;
    
    for(j=0;j<d;p=p+in,j++)
    {
        in=si(p,n,r);
    }
    return in;
}
