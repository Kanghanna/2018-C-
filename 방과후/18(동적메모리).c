//���ڸ� �Է¹ް� �� ���ڵ� �� ������ ������ ���
#include <stdio.h>

int main(){
	int num, *a,i,count=0;
	
	printf("���ڸ� �Է¹��� ���� : ");
	scanf("%d",&num);
	a = malloc(num*sizeof(int));
	
	if(a==NULL) printf("�Ҵ� ����");
	
	for(i=0; i<num; i++){
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d",&a[i]);
	if(a[i]<0) count++;
	if(a[i]==0) break;
	}
	printf("���: ������ %d���Դϴ�.",count);
} 
