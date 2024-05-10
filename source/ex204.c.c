#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1;float b=2.0;
	scanf("%d",&a);
	 if(a<=125){
	 	b=100;
	 }else if(a<=200&&a>125){
	 	b=a*0.8;
	 }else if(a>200&&a<=300){
	 	b=160+(a-200)*0.9;
	 }else {
	 	b=250+(a-300)*1.0;
	 } 
	 if(b>400){
	 b+=b*0.15;
	 }
	 printf("%.2f\n",b);
 
	return 0;
}

