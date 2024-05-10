#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a=1;
	float b=2;
	int c=3;
	int d=4;
	float e=5;
	float f=6;
	scanf("%f,%f,%d,%d",&a,&b,&c,&d);
	e=(a-b)/c;
	f=a-e*d;
	printf("%.2f,%.2f\n",e,f);
	
	return 0;
}
