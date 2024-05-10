#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   
	int i,j,k,n;
	 
	for(n=100;n<1000;n++)
	{
		i=n/100;       //分出百位 数字 
		j=(n-i*100)/10;        //分出十位数字
	    k=n%10;        //分出个位数字
		if(n==i*i*i+j*j*j+k*k*k)
		printf("%d\n",n); 
	}
}


