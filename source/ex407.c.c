#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double Main(double a,double b,int c) {

   double  d=0.0,e=b/12.0;
 
   
   for(int i=1;i<=c;i++) {
   	d=(1+e)*(d+a);
   }
   return d;
}
   int main(){
   double a,b;
   int c;
   scanf("%lf,%lf,%d",&a,&b,&c);
   double x=Main(a,b,c);
   printf("%.2lf\n",x);
    
	return 0;
}

