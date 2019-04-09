#include <stdio.h>
#include <string.h>
//문자열 입력
//문자열을 거꾸로 저장하는 함수

char* sub(char*);

int main() {
	char a[50] = "Hi hello 안녕하세요";

	int c = sub(*a);
	printf("%d", c);
}

char* sub(char *a) {
	int i, j; static char b[50];
	for (i = strlen(a); i >= 0; i--)
		for (j = 0; j < strlen(a); i++)
			b[j] = a[i];

	return b;
}
//char a[10] = "hello";
//char *p = "hello";
//뒤에 쓰레기 값이 나오는 경우에는 %s로 출력하는 경우에 'null'값을 마지막에 넣어주지 않았을 경우일 수 있다.