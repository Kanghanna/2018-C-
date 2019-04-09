//문자열 입력
//공백의 갯수를 리턴

#include <stdio.h>
#include <string.h>

int sub(char*, int);

int main() {
	char *str[50] = "I'm a student";
	int length = strlen(*str);

	int a = sub(*str, length);
	printf("%d", a);
}

int sub(char *str, int length) {
	int i, space =0;
	for (i = 0; i < length; i++) {
		if (str[i] == " ");
			space++;
	}
	return space;
}