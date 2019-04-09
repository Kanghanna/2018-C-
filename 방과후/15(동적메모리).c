// 동적메모리에 실수들 입력하여 그 실수들의 평균 출력
#include <stdio.h>

int main(){
	int f,i;
	float *a,avg=0;
	
	printf("실수 넣을 개수 입력: ");
	scanf("%d",&f);
	a = malloc(f*sizeof(float));
	
	if(a==NULL) printf("할당실패");
	
	for(i=0; i<f; i++){
		printf("실수를 입력하세요:");
		scanf("%f",&a[i]);
		avg += a[i];	
	}
	avg /= f;
	printf("결과: %f",avg);
	free(a);
	return 0;
} 
