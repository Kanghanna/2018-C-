#include <stdio.h>

//��ҹ��� ����
// �ҹ��� -> �빮��

char sub(char);

int main(void) {
	char a;

		while (1) { // �������� (0 : false) (1 : true) 
		printf("�ҹ��ڸ� �Է� : ");
		fflush(stdin);
		scanf_s("%c", &a);

		if (!a) //a=0�� �� 0�� �ݴ� = 1(true)
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