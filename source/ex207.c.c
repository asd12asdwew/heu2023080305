#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int a=(n%3)==0;
	int b=(n%5)==0;
	int c=(n%7)==0;
	if(a&&b&&c){
		printf("Can be divisible by 3,5,7.\n");}
		else if((a&&b)||(a&&c)||(b&&c)){
			if(a&&b){
			printf("Can be divisible by 3,5.\n");	
			}else if(a&&c){
				printf("Can be divisible by 3,7.\n");
			}else{
				printf("Can be divisible by 5,7.\n");
			}
		}else if(a||b||c){
			if(a){
				printf("Can be divisible by 3.\n");
			}else if(b){
				printf("Can be divisible by 5.\n");
			}else{
				printf("Can be divisible by 7.\n");
			}
		}else{
			printf("Can not be divisible by 3,5,7.\n");
		}
	
	return 0;
}

