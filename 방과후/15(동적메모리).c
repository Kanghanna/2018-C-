// �����޸𸮿� �Ǽ��� �Է��Ͽ� �� �Ǽ����� ��� ���
#include <stdio.h>

int main(){
	int f,i;
	float *a,avg=0;
	
	printf("�Ǽ� ���� ���� �Է�: ");
	scanf("%d",&f);
	a = malloc(f*sizeof(float));
	
	if(a==NULL) printf("�Ҵ����");
	
	for(i=0; i<f; i++){
		printf("�Ǽ��� �Է��ϼ���:");
		scanf("%f",&a[i]);
		avg += a[i];	
	}
	avg /= f;
	printf("���: %f",avg);
	free(a);
	return 0;
} 
