#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	int sum;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	
	if(a<b){
		if(c<d){
			sum=a+d;
			printf("%d",sum);
		}else{
			sum=a+c;
			printf("%d",sum);
		}
	} else{
		if(c<d){
			sum=b+d;
			printf("%d",sum);
		}else{
			sum=b+c;
			printf("%d",sum);
		}
	}
	return 0;
}

