#include <stdio.h>
int main(void) {
    int z=0x3132;
    int a=0x31324142;
    int b=0x42413132;
    int d=111222;
    int ary[]={0x31324142,0x41423132,100};
    printf(" %s",ary);
    printf("\n %x",d);
    printf("\n %d",b);
    printf("\n %c",a);
    printf("\n %d",z);
    printf("\n %d",a);
   printf("\n %d",sizeof(char));
   printf("\n %d",sizeof(int));
   printf("\n %c",b);
   
	return 0;
}
