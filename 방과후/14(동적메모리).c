//3개의 문자열 입력 하나의 배열에 합치기
#include <stdio.h> 

int main(){
//	char ch1[10];
//	char ch2[10];
//	char ch3[10];
	char re[100];
	printf("문자열 입력:");
	scanf("%s",re); 
	
	sub = (*int)malloc(re*sizeof(char));
	printf(sub);
	free(sub);
	
	
	
	
	
	
	/*
	printf("문자열 입력 번째 :");
	scanf("%s",ch2);첫 
	printf("문자열 입력 두번째 :");
	scanf("%s",ch2);
	printf("문자열 입력 세번째 :");
	scanf("%s",ch3);
	
	re = realloc(ch1,ch1*sizeof(char)+ch2*sizeof(char)+ch3*sizeof(char));
	printf(re);
	*/
	free(re);
}
