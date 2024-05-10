#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,sum,a,b=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		a=i;
		sum=0;
		while(a){sum=sum*10+a%10;
		a=a/10;
		}
		if(sum==i)printf("%d,",i),b++;
		if(b/10==1){printf("\n");
		b=0;
		}
	}
	
 
	return 0;
}

