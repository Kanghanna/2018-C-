#include <stdio.h>
#include <string.h>
//3개 문자열 입력
//3개 문자열을 합치기

int main() {
	char str1[30] = "안녕하세요";
	char str2[10] = "저는";
	char str3[10] = "강한나에요";
	
	strcat(str1," ");
	strcat(str1, str2);
	strcat(str1, " ");
	strcat(str1, str3);

	puts(str1);
}