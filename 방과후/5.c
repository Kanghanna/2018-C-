#include <stdio.h>
//���� �ϳ� �Է�
//���� ��� �Լ�

int main(void) {
	int a;
	printf("���� �ϳ� �Է� : ");
	scanf("%d", &a);
	
	sub(a);
}

int sub(int a) {
	int result;
	if (a < 0)
		return -a;
	else return a;
}

//����ü(structure) : ����������� �ڷ���
//       int a; (intŸ���� a����)
//struct st b; (stŸ���� b����)
//���� stŸ���� ������ ����� �ʹ��ϸ�
//struct st b[10] �̷��� �ϸ� ��

//typedef : Ÿ���� ������
//ex) typedef struct st ST
//struct st OR struct ST �� �� ��Ī���� ��밡��

//������� ��� IDE�� ����Ǿ� �ִ�.