//3���� ���ڿ� �Է� �ϳ��� �迭�� ��ġ��
#include <stdio.h> 

int main(){
//	char ch1[10];
//	char ch2[10];
//	char ch3[10];
	char re[100];
	printf("���ڿ� �Է�:");
	scanf("%s",re); 
	
	sub = (*int)malloc(re*sizeof(char));
	printf(sub);
	free(sub);
	
	
	
	
	
	
	/*
	printf("���ڿ� �Է� ��° :");
	scanf("%s",ch2);ù 
	printf("���ڿ� �Է� �ι�° :");
	scanf("%s",ch2);
	printf("���ڿ� �Է� ����° :");
	scanf("%s",ch3);
	
	re = realloc(ch1,ch1*sizeof(char)+ch2*sizeof(char)+ch3*sizeof(char));
	printf(re);
	*/
	free(re);
}
