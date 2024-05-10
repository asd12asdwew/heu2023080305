#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void pao(int a[],int n) {
	int i,j,k;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
}
int main(){
    void pao(int a[],int n);
    const int n=5;
    int a,b,c,d,e,i;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int k[5]={a,b,c,d,e};
    pao(k,n);
    for(i=0;i<n;i++){
    	printf("%d ",k[i]);
    	
	}
 
}

