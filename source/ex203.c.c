#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=1;
	scanf("%d",&n);
	int s=n/10,g=n%10;
	if(s==1){
	
	switch(g){
	    case 0:printf("ten");break;
		case 1:
		printf("eleven");break;
		case 2:
		printf("twelve");break;
		case 3:
		printf("thirteen");break;
		case 4:
		printf("fourteen");break;
		case 5:
		printf("fifteen");break;
		case 6:
		printf("sixteen");break;
		case 7:
		printf("seventeen");break;
		case 8:
		printf("eighteen");break;
		case 9:
		printf("ninteen");break;
}
	}else{
	
	
	switch(s){
		case 2:printf("twenty-");break;
		case 3:printf("thirty-");break;
		case 4:printf("forty-");break;
		case 5:printf("fifty-");break;
		case 6:printf("sixty-");break;
		case 7:printf("seventy-");break;
		case 8:printf("eighty-");break;
		case 9:printf("ninety-");break;
		
	}
	switch(g){
	case 1:printf("one\n");break;
		case 2:printf("two\n");break;
		case 3:printf("three\n");break;
		case 4:printf("four\n");break;
		case 5:printf("five\n");break;
		case 6:printf("six\n");break;
		case 7:printf("seven\n");break;
		case 8:printf("eight\n");break;
		case 9:printf("nine\n");break;
		default:break;	
	}
}
	return 0;
}

