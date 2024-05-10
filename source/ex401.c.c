#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1;
	int b=2;
	int c=3;
	int d=4;
	int e=5;
	int f=6;
	scanf("%d,%d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("a+b=%d\n",c);
	printf("a-b=%d\n",d);
	printf("a*b=%d\n",e);
	printf("a/b=%d\n",f);
	return 0;
}

