#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 #include<stdio.h>
int main()
{
	int i,t,n;
	scanf("%d",&n);
	float f1 = 1, f2 = 2, sum = 0;//f1表示分母，f2表示分子
	for (i = 1;i <= n;i++)
	{
		sum = f2 / (f1)+sum;
		t = f2;   //把f2的值给f1，即前面那个分数的分子的值给后面那个分数的分母
		f2 = f1 + f2;//后面分数的分母的值等于前一个分数的分母加分子
		f1 = t;
		
	}
	printf("%.2f", sum);
}

