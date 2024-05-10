 #include <stdio.h>  
#include <stdlib.h>  
  
#define MAX_NUMS 100  
#define MAX_VALUE 10000 // ���������ķ�Χ��[-10000, 10000]֮�䣬���Ը���ʵ���������  
  
int main() {  
    int n, i, num;  
    int count[2 * MAX_VALUE + 1] = {0}; // ����������[-MAX_VALUE, MAX_VALUE]��Χ��  
    int max_count = 0, max_nums[MAX_NUMS] = {0}, max_nums_count = 0;  
  
    // ��ȡ��������  
    scanf("%d", &n);  
  
    // ��ȡ����������  
    for (i = 0; i < n; i++) {  
        scanf("%d", &num);  
        count[num + MAX_VALUE]++; // ������ӳ�䵽�Ǹ�������  
    }  
  
    // �ҳ������ִ����Ͷ�Ӧ������  
    for (i = -MAX_VALUE; i <= MAX_VALUE; i++) {  
        if (count[i + MAX_VALUE] > max_count) {  
            max_count = count[i + MAX_VALUE];  
            max_nums_count = 0; // ���������ִ�������������  
            max_nums[max_nums_count++] = i; // ���浱ǰ����  
        } else if (count[i + MAX_VALUE] == max_count) {  
            max_nums[max_nums_count++] = i; // ������ִ�����ͬ��Ҳ���浱ǰ����  
        }  
    }  
  
    // �������ִ����������������������Ҫ��  
    // ����������У����Ǽ򵥵ذ�����������ǣ���Ϊ�����Ѿ����ռ���������  
  
    // ������  
    for (i = 0; i < max_nums_count; i++) {  
        printf("%d %d\n", max_nums[i], max_count);  
    }  
  
    return 0;  
}

