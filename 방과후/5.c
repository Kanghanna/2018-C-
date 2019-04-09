#include <stdio.h>
//숫자 하나 입력
//절댓값 출력 함수

int main(void) {
	int a;
	printf("숫자 하나 입력 : ");
	scanf("%d", &a);
	
	sub(a);
}

int sub(int a) {
	int result;
	if (a < 0)
		return -a;
	else return a;
}

//구조체(structure) : 사용자정의형 자료형
//       int a; (int타입의 a변수)
//struct st b; (st타입의 b변수)
//만약 st타입을 여러개 만들고 싶다하면
//struct st b[10] 이렇게 하면 됨

//typedef : 타입을 재정의
//ex) typedef struct st ST
//struct st OR struct ST 둘 다 별칭으로 사용가능

//디버깅은 모든 IDE에 내장되어 있다.