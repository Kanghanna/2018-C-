#include <stdio.h>

//���� 5�� �Է�
//5���� ���� ��� �Լ�
//pointer������ ������ 4����Ʈ
int sub(int* );

int main() {
	int a[5] = { 0 };
	int i, result;
	printf("���� 5�� �Է� : ");
	fflush(stdin);
	for(i=0; i<5; i++)
	scanf_s("%d", &a[i]);

	result = sub(a); // == &a[0]
	printf(sub(a));
	return 0;
}

int sub(int* p) { //* p= int�� ������ �Լ�    //*p = p�� ����Ű�� �ּ��� ������
	int i, result=0;
	for (i = 0; i < 5; i++) {
		result += p[i];
	}
	return result;
}
