#include <stdio.h>

int sub(int*);
int main() {
	int* p = sub;
	sub(p);
}

int sub(int*) {
	int arr[2][3] = { { 2,5,3 }, { 7,4,6 } };
	int i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			printf("%d", arr[i][j]);

}
//���̺귯��
//���� ���̺귯�� / ���� ���̺귯�� / ���� ���̺귯��
