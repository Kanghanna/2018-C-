#include <stdio.h>

//대소문자 변경
// 소문자 -> 대문자

char sub(char);

int main(void) {
	char a;

		while (1) { // 잊지말자 (0 : false) (1 : true) 
		printf("소문자를 입력 : ");
		fflush(stdin);
		scanf_s("%c", &a);

		if (!a) //a=0일 때 0의 반대 = 1(true)
			break;
		else
			sub(a);
	}
		return 0;
}

char sub(char a) {
	char result = ('a' <= a && 'z' >= a) ? ('a'-'A') : a;

	return result;
}