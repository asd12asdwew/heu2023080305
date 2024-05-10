 #include <stdio.h>  
#include <stdlib.h>  
  
#define MAX_SIZE 20  
  
typedef struct {  
    int data[MAX_SIZE];  
    int count;  
} IntSet;  
  
IntSet readSet() {  
    IntSet set;  
    int n, value;  
    scanf("%d", &n);  
    set.count = 0;  
    for (int i = 0; i < n && i < MAX_SIZE; i++) {  
        scanf("%d", &value);  
        set.data[i] = value;  
        set.count++;  
    }  
    return set;  
}  
  
void sortSet(IntSet *set) {  
    for (int i = 0; i < set->count - 1; i++) {  
        for (int j = 0; j < set->count - i - 1; j++) {  
            if (set->data[j] > set->data[j + 1]) {  
                int temp = set->data[j];  
                set->data[j] = set->data[j + 1];  
                set->data[j + 1] = temp;  
            }  
        }  
    }  
}  
  
int compareSets(IntSet set1, IntSet set2) {  
    if (set1.count != set2.count) return 0;  
    for (int i = 0; i < set1.count; i++) {  
        if (set1.data[i] != set2.data[i]) return 0;  
    }  
    return 1;  
}  
  
void printSetWithDuplicates(IntSet set) {  
    int counts[MAX_SIZE] = {0};  
    for (int i = 0; i < set.count; i++) {  
        counts[i] = 1; // 初始化每个元素的计数为1  
        for (int j = i + 1; j < set.count; j++) {  
            if (set.data[i] == set.data[j]) {  
                counts[i]++; // 增加计数  
                for (int k = j; k < set.count - 1; k++) {  
                    set.data[k] = set.data[k + 1]; // 移除重复元素  
                }  
                set.count--; // 更新集合大小  
                j--; // 重复检查当前位置，因为可能有多个重复  
            }  
        }  
        printf("%d %d\n", set.data[i], counts[i]);  
    }  
}  
  
int main() {  
    IntSet set1 = readSet();  
    IntSet set2 = readSet();  
  
    sortSet(&set1);  
    sortSet(&set2);  
  
    if (compareSets(set1, set2)) {  
        printf("1\n");  
    } else {  
        printf("0\n");  
    }  
  
    printSetWithDuplicates(set1);  
  
    return 0;  
}

