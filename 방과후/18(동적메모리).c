//숫자를 입력받고 그 숫자들 중 음수의 개수를 출력
#include <stdio.h>

int main(){
	int num, *a,i,count=0;
	
	printf("숫자를 입력받을 개수 : ");
	scanf("%d",&num);
	a = malloc(num*sizeof(int));
	
	if(a==NULL) printf("할당 실패");
	
	for(i=0; i<num; i++){
	printf("숫자를 입력하세요: ");
	scanf("%d",&a[i]);
	if(a[i]<0) count++;
	if(a[i]==0) break;
	}
	printf("결과: 음수는 %d개입니다.",count);
} 
