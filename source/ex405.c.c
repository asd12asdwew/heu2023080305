#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
float Px(int n,int x){
    if (n==0)
        return 1;
    else if (n==1)
        return x;
    else
        return ((2*n-1)*x-Px(n-1,x)-(n-1)*Px(n-2,x))/n;}
int main() {
    int n,x;
    
    scanf("%d,%d",&n,&x);
    if(n<0)
        printf("error");
    else
        printf("%.2f",Px(n,x));
    return 0;
}


 


