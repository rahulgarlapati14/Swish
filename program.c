#include <stdio.h>

int main(void) {
    int b,x,p,total=0;
    float c;
	scanf("%d %d",&x,&p);
	b=x;
    if(b<=1)
        total=1;
    else{
    while(x>=1){
        total+=x;
        x=x-x*p/100;
        
    }
    }
	printf("%d",total);
	printf("\n");
	return 0;
}
