#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 #include<stdio.h>
int main()
{
	int i,t,n;
	scanf("%d",&n);
	float f1 = 1, f2 = 2, sum = 0;//f1��ʾ��ĸ��f2��ʾ����
	for (i = 1;i <= n;i++)
	{
		sum = f2 / (f1)+sum;
		t = f2;   //��f2��ֵ��f1����ǰ���Ǹ������ķ��ӵ�ֵ�������Ǹ������ķ�ĸ
		f2 = f1 + f2;//��������ķ�ĸ��ֵ����ǰһ�������ķ�ĸ�ӷ���
		f1 = t;
		
	}
	printf("%.2f", sum);
}

