#include <stdio.h>
#include <string.h>
//���ڿ� �Է�
//���ڿ��� �Ųٷ� �����ϴ� �Լ�

char* sub(char*);

int main() {
	char a[50] = "Hi hello �ȳ��ϼ���";

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
//�ڿ� ������ ���� ������ ��쿡�� %s�� ����ϴ� ��쿡 'null'���� �������� �־����� �ʾ��� ����� �� �ִ�.