//���ڵ��� �Է��ϰ� �� ���ڵ��� ���� ���ض�
#include <stdio.h>

int main(){
	int a,i,sub;
	int *ch;
	
	puts("�Է��� ������ �Է��ϼ��� : ");
	scanf("%d",&a);
	ch = malloc(a*sizeof(int));
	
	if(ch==NULL) printf("�Ҵ����");
	
	for(i=0; i<a; i++){
		puts("���ڸ� �Է��ϼ��� : ");
		 scanf("%d",&ch[i]);
		sub += ch[i];
	}
	printf("���: %d",sub);
	
	free(ch);
	
	return 0;
} 
