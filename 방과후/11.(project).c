#include <stdio.h>
#include <string.h>
#define BOOK_AMOUNT 100
typedef struct book {
	char bookTitle[50]; //������
	char bookauthor[20]; //����
	char bookCode[9]; // xxxx-xxx(���ڵ�) 
	int bookprice; //����
	int bookSale; //�Ǹż���
}BOOK;

int inBook(BOOK*, int); //�����Է�
void outBook(BOOK*, int); //�������
void searchBook(BOOK*, int); //�����˻�

int main() {
	int sel, totalBCnt = 0;
	BOOK mybook[100];
	while (1) {
		puts("\n\n���ϴ� �޴��� �����ϼ���");
		puts("1. ���� �Է�");
		puts("2. ���� ���");
		puts("3. ���� �˻�");
		puts("0. ����");
		scanf("%d", &sel);
		fflush(stdin);

		switch (sel) {
		case 1: totalBCnt = inBook(mybook, totalBCnt); break;
		case 2: outBook(mybook, totalBCnt); break;
		case 3: searchBook(mybook, totalBCnt); break;
		case 0: return 0;
		default: puts("0~3 ������ �޴� ��ȣ�� �Է��ϼ���");
		}//switch
	}//while
} //main

int inBook(BOOK* mybook, int totalBCnt) {
	int i;
	for (i = 0; i < BOOK_AMOUNT; i++) {
		getchar();
		printf("å ����: ");
		gets(mybook[i].bookTitle);
		printf("å ����: ");
		gets(mybook[i].bookauthor);
		printf("å ����: ");
		scanf("%d", &mybook[i].bookprice);
		printf("å �Ǹż���: ");
		getchar();
		scanf("%d", &mybook[i].bookSale);
		totalBCnt++;
		break;
	}
	return totalBCnt;
}

void outBook(BOOK* mybook, int totalBCnt) {
	int i;
	for (i = 0; i < totalBCnt; i++) {
		printf("-------------------------------------------------\n");
  		printf("å ����: %s\n",mybook[i].bookTitle);
		printf("å ����: %s\n",mybook[i].bookauthor);
		printf("å ����: %d\n",mybook[i].bookprice);
		printf("å �Ǹż���: %d\n", mybook[i].bookSale);
	}
	
}

void searchBook(BOOK* mybook, int totalBCnt) {
	int sel,i;
	char t[50], a[20]; //���� �˻� ��� ����, ���� �˻� ��� ���� 
	puts("\n���ϴ� �޴��� �����ϼ���");
	puts("1. å���� �˻�");
	puts("2. ���� �˻�");
	scanf("%d", &sel);
	fflush(stdin);
	getchar();
	switch (sel) {
	case 1: printf("�˻��� ������ �Է��ϼ��� : ");
		 gets(t);
		 for(i=0; i<totalBCnt; i++){
	  	 if(!strcmp(t,mybook[i].bookTitle)) //���ڿ��� �ٸ��� true
			printf("å ����: %s\n",mybook[i].bookTitle);
			printf("å ����: %s\n",mybook[i].bookauthor);
			printf("å ����: %d\n",mybook[i].bookprice);
			printf("å �Ǹż���: %d\n", mybook[i].bookSale);
		 } break;
	case 2: printf("�˻��� ���ڸ� �Է��ϼ��� : ");
		 gets(a);
		 for(i=0; i<totalBCnt; i++){
		 	if(!strcmp(a,mybook[i].bookauthor)) //���ڿ��� �ٸ��� true
			printf("å ����: %s\n",mybook[i].bookTitle);
			printf("å ����: %s\n",mybook[i].bookauthor);
			printf("å ����: %d\n",mybook[i].bookprice);
			printf("å �Ǹż���: %d\n", mybook[i].bookSale);
		 } break;
	default :puts("1~2 ������ �޴� ��ȣ�� �Է��ϼ���");
	}
	
}
