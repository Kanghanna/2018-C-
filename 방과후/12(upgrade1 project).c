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
		puts("\n���ϴ� �޴��� �����ϼ���");
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
	int i,spn;
	for (i = 0; i < BOOK_AMOUNT; i++) {
		printf("å ����: ");
		gets(mybook[i].bookTitle);
		printf("å ����: ");
		gets(mybook[i].bookauthor);
		printf("å ����: ");
		scanf("%d", &mybook[i].bookprice);
		printf("å �Ǹż���: ");
		scanf("%d", &mybook[i].bookSale);
		do{
		printf("å �ڵ�(xxxx-xxx): ");
		scanf("%s",&mybook[i].bookCode);
		spn = strspn(mybook[i].bookCode,"0123456789-");
	} while(8!=spn);
			
		totalBCnt++;
		break;
	}
	return totalBCnt;
}

void outBook(BOOK* mybook, int totalBCnt) {
	int i,sel,since,count=0;
	char ch[9],*sub;
	puts("1. ��ü���");
	puts("2. �������");
	puts("3. ����Ʈ���� TOP3");
	scanf("%d",&sel);
	switch(sel){ 
	
	case 1: for (i = 0; i < totalBCnt; i++) {
		printf("-------------------------------------------------\n");
  		printf("å ����: %s\n",mybook[i].bookTitle);
		printf("å ����: %s\n",mybook[i].bookauthor);
		printf("å ����: %d\n",mybook[i].bookprice);
		printf("å �Ǹż���: %d\n", mybook[i].bookSale);
		printf("å �ڵ� : %s\n", mybook[i].bookCode);
	}break; //for
	
	case 2: printf("���� ���� �Է� : ");	scanf("%s",since);
	for (i = 0; i < totalBCnt; i++) {
 		 strcpy(ch,mybook[i].bookCode);
		  sub = strtok(ch,"-");
 		  	  
		 if(sub==since){
		 count++; 
		 printf("-------------------------------------------------\n");
  		printf("å ����: %s\n",mybook[i].bookTitle);
		printf("å ����: %s\n",mybook[i].bookauthor);
		printf("å ����: %d\n",mybook[i].bookprice);
		printf("å �Ǹż���: %d\n", mybook[i].bookSale);
		printf("å �ڵ� : %s\n", mybook[i].bookCode);
		printf("\n�˻� ����� �� %d�� �Դϴ�.",count);
		 }
 }
		 break;
		 
		 case 3: 
	}//switch
}

void searchBook(BOOK* mybook, int totalBCnt) {
	int sel,i,count=0;
	char t[50], a[20]; //���� �˻� ��� ����, ���� �˻� ��� ���� 
	puts("���ϴ� �޴��� �����ϼ���");
	puts("1. å���� �˻�");
	puts("2. ���� �˻�");
	scanf("%d", &sel);
	fflush(stdin);
	switch (sel) {
	case 1: printf("�˻��� ������ �Է��ϼ��� : ");
		 gets(t);
		 for(i=0; i<totalBCnt; i++){
	  	 if(strstr(mybook[i].bookTitle,t)){ //���ڿ��� �ٸ��� true
	  	 count++;
			printf("å ����: %s\n",mybook[i].bookTitle);
			printf("å ����: %s\n",mybook[i].bookauthor);
			printf("å ����: %d\n",mybook[i].bookprice);
			printf("å �Ǹż���: %d\n", mybook[i].bookSale);
			printf("å �ڵ� : %s\n", mybook[i].bookCode);
			printf("\n�˻� ����� �� %d�� �Դϴ�.",count);
		}
		else printf("ã���ô� ����� �����ϴ�.");
		 } break;
	case 2: printf("�˻��� ���ڸ� �Է��ϼ��� : ");
		 gets(a);
		 for(i=0; i<totalBCnt; i++){
		 	if(!strcmp(a,mybook[i].bookauthor)){ //���ڿ��� �ٸ��� true
		 	count++;
			printf("å ����: %s\n",mybook[i].bookTitle);
			printf("å ����: %s\n",mybook[i].bookauthor);
			printf("å ����: %d\n",mybook[i].bookprice);
			printf("å �Ǹż���: %d\n", mybook[i].bookSale);
			printf("å �ڵ� : %s\n", mybook[i].bookCode);
			printf("\n�˻� ����� �� %d�� �Դϴ�.",count);
		}
		else printf("ã���ô� ����� �����ϴ�.");
		 } break;
	default :puts("1~2 ������ �޴� ��ȣ�� �Է��ϼ���");
	}
	
}
