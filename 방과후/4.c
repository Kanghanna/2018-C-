#include <stdio.h>
//���� 5�� �Է�
//���� ū ���� ��� �Լ�


int main() {
	char sub(char*);
	char a[5];
	int i;
		printf("���� 5�� �Է� : ");
		fflush(stdin);
		for(i=0; i<5; i++)
		scanf_s("%c", &a);

		sub(p);
	return 0;
}

char sub(char* p) {
	int i;
	char max = 0;
	for (i = 0; i < 5; i++) {
		if (max < p[i]);
		max = p[i];
	}

	return max;
}
