#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char a[5];
    char b[5];
    int i=0;
    scanf("%s",a);
    for(i=0;i<5;i++){
    	int c=a[i]-'a';
    	int d=(c+4)%26;
    	b[i]=d+'a';
    	printf("%c",b[i]);
	}
     
    
    
    
	return 0;
}


