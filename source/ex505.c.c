#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], ch[5];
    int i, j = 0,k=0, t;
    gets(str1);
    if (str1[strlen(str1) - 2] == '}') {
        for (i = 0; i<strlen(str1); i++) {
            if (str1[i] == '[') {
                while (str1[i++] != ']') {
                    if (str1[i] >= '0'&& str1[i] <= '9') {
                        ch[j++] = str1[i];

                    }
                }
                t = atoi(ch);
            }

            if ((str1[i] >= '0'&& str1[i] <= '9')||str1[i]=='-') {
                printf("%c", str1[i]);
            }
            if (str1[i] == ',') {
                printf(" ");
                k++;
            }
        }
        for (i = 0; i < t - k - 1; i++) {
            printf(" 0");
        }
    }
    else {
        for (i = 0; i<strlen(str1); i++) {
            if (str1[i] == '[') {
                while (str1[i++] != ']') {
                    if (str1[i] >= '0'&& str1[i] <= '9') {
                        ch[j++] = str1[i];

                    }
                }
                t = atoi(ch);
                for (i = 0; i < t; i++) {
                    if (i == t - 1) {
                        printf("N");
                    }
                    else {
                        printf("N ");
                    }

                }
                break;
            }

        }

    }

    return 0;
}
 

