//문자열을 입력 받고 하나의 동적 메모리에 저장(end입력하면 종료) 
#include <stdio.h>

int main(){
	int count=0;
	char ch,a;
	
	
	while(1){
		printf("문자열 입력 :");
		scanf("%s",&ch);
		
		if(a == NULL) printf("할당실패");
		a = realloc(재할당 메모리 포인터, 재할당크기);
		
		if(ch=="end") return 0; 
	}
} 
