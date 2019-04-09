#include <stdio.h>

//정수 5개 입력
//5개의 합을 출력 함수
//pointer변수는 무조건 4바이트
int sub(int* );

int main() {
	int a[5] = { 0 };
	int i, result;
	printf("정수 5개 입력 : ");
	fflush(stdin);
	for(i=0; i<5; i++)
	scanf_s("%d", &a[i]);

	result = sub(a); // == &a[0]
	printf(sub(a));
	return 0;
}

int sub(int* p) { //* p= int형 포인터 함수    //*p = p가 가르키는 주소의 데이터
	int i, result=0;
	for (i = 0; i < 5; i++) {
		result += p[i];
	}
	return result;
}
