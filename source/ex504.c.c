 #include <stdio.h>  
#include <stdlib.h>  
  
#define MAX_NUMS 100  
#define MAX_VALUE 10000 // 假设整数的范围在[-10000, 10000]之间，可以根据实际情况调整  
  
int main() {  
    int n, i, num;  
    int count[2 * MAX_VALUE + 1] = {0}; // 假设整数在[-MAX_VALUE, MAX_VALUE]范围内  
    int max_count = 0, max_nums[MAX_NUMS] = {0}, max_nums_count = 0;  
  
    // 读取整数个数  
    scanf("%d", &n);  
  
    // 读取整数并计数  
    for (i = 0; i < n; i++) {  
        scanf("%d", &num);  
        count[num + MAX_VALUE]++; // 将整数映射到非负索引上  
    }  
  
    // 找出最大出现次数和对应的整数  
    for (i = -MAX_VALUE; i <= MAX_VALUE; i++) {  
        if (count[i + MAX_VALUE] > max_count) {  
            max_count = count[i + MAX_VALUE];  
            max_nums_count = 0; // 重置最大出现次数的整数数量  
            max_nums[max_nums_count++] = i; // 保存当前整数  
        } else if (count[i + MAX_VALUE] == max_count) {  
            max_nums[max_nums_count++] = i; // 如果出现次数相同，也保存当前整数  
        }  
    }  
  
    // 对最大出现次数的整数进行排序（如果需要）  
    // 在这个例子中，我们简单地按升序输出它们，因为它们已经被收集在数组中  
  
    // 输出结果  
    for (i = 0; i < max_nums_count; i++) {  
        printf("%d %d\n", max_nums[i], max_count);  
    }  
  
    return 0;  
}

