#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 
   
    int numbers[8]; // ����һ�������˸�����������
    int sum = 0; // ��ʼ��ż���ĺ�Ϊ0

    // ʹ��forѭ����ȡ�˸�����
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numbers[i]);
    }

    // ʹ��forѭ���������鲢���ÿ��Ԫ���Ƿ�Ϊż��
    for (int i = 0; i < 8; i++) {
        // �����ǰԪ����ż����������2������Ϊ0��
        if (numbers[i] % 2 == 0) {
            // ����ż���ۼӵ��ܺ���
            sum += numbers[i];
        }
    }

    // �������ż���ĺ�
    printf("%d\n", sum);

    return 0;
}


  


