#include <stdio.h>
#include <string.h>
//3�� ���ڿ� �Է�
//3�� ���ڿ��� ��ġ��

int main() {
	char str1[30] = "�ȳ��ϼ���";
	char str2[10] = "����";
	char str3[10] = "���ѳ�����";
	
	strcat(str1," ");
	strcat(str1, str2);
	strcat(str1, " ");
	strcat(str1, str3);

	puts(str1);
}