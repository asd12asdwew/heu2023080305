#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isPerfectNumber(int num);
int main() {  
   int m,n;
   int comma=0;
   if(scanf("%d,%d",&m,&n)!=2||m<1||n>9999||m>n){
   	printf("error\n");
   	return 1;
   }
    
   for(int i=m;i<=n;i++){
   	if(isPerfectNumber(i)){
   		if(comma){
		   printf(",");
		   }else{comma=1;
		   }
   		printf("%d",i);
	   }
   }
   printf("\n");
   return 0;
}
int isPerfectNumber(int num){
	int sum=0;
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum+=i;
		 
		}
	}
	return sum==num;
}
 
	



