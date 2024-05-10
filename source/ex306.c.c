#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 
   
    int numbers[8]; // 声明一个包含八个整数的数组
    int sum = 0; // 初始化偶数的和为0

    // 使用for循环读取八个整数
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numbers[i]);
    }

    // 使用for循环遍历数组并检查每个元素是否为偶数
    for (int i = 0; i < 8; i++) {
        // 如果当前元素是偶数（即除以2的余数为0）
        if (numbers[i] % 2 == 0) {
            // 将该偶数累加到总和中
            sum += numbers[i];
        }
    }

    // 输出所有偶数的和
    printf("%d\n", sum);

    return 0;
}


  


