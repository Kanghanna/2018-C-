#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book {
	char bookTitle[50]; //������
	char bookauthor[20]; //����
	char bookCode[9]; // xxxx-xxx(���ڵ�) 
	int bookprice; //����
	int bookSale; //�Ǹż���
}BOOK;

BOOK* inBook(BOOK*, int*); //�����Է�
void outBook(BOOK*, int*); //�������
int pointer(const void*,const void*);
void searchBook(BOOK*, int*); //�����˻�
void saveBook(BOOK*, int*); // ���Ͽ� ���� ����
void readBook(BOOK*, int*); // ������ ������ �о���� 

int main() {
	int sel, *totalBCnt = 0;
	BOOK* mybook;
	
	mybook = (BOOK*)calloc(sizeof(BOOK),1);
	
	readBook(mybook, totalBCnt);
	while (1) {
		puts("\n���ϴ� �޴��� �����ϼ���");
		puts("1. ���� �Է�");
		puts("2. ���� ���");
		puts("3. ���� �˻�");
		puts("0. ����");
		scanf("%d", &sel);
		switch (sel) {
		case 1: mybook = inBook(mybook, totalBCnt); break;
		case 2: outBook(mybook, totalBCnt); break;
		case 3: searchBook(mybook, totalBCnt); break;
		case 0: saveBook(mybook, totalBCnt); return 0;
		default: puts("0~3 ������ �޴� ��ȣ�� �Է��ϼ���");
		}//switch
	}//while
} //main

void saveBook(BOOK* mybook, int* totalBCnt){
	FILE* fp1; int i;
	fp1 = fopen("mybook.txt","w+");
	while(i<= &totalBCnt){
		scanf("%s %s %d %d %9s\n",mybook[*totalBCnt].bookTitle,mybook[*totalBCnt].bookauthor,mybook[*totalBCnt].bookprice
		,mybook[*totalBCnt].bookSale,mybook[*totalBCnt].bookCode);
		fprintf(stdin,"%s %s %d %d %9s\n",mybook[*totalBCnt].bookTitle,mybook[*totalBCnt].bookauthor,mybook[*totalBCnt].bookprice
		,mybook[*totalBCnt].bookSale,mybook[*totalBCnt].bookCode);
		i++;
	}
	fclose(fp1);
	
}

void readBook(BOOK* mybook, int* totalBCnt){
	 FILE* fp1; int i;
	fp1 = fopen("mybook.txt","r+");
	while(i<= &totalBCnt){
		fprintf(stdin,"%s %s %d %d %9s",mybook[*totalBCnt].bookTitle,mybook[*totalBCnt].bookauthor,mybook[*totalBCnt].bookprice
		,mybook[*totalBCnt].bookSale,mybook[*totalBCnt].bookCode);
		i++;
	}
		fclose(fp1);
}

BOOK* inBook(BOOK* mybook, int* totalBCnt) {
	int i,spn;
	char in;
		
	while(1) { 
	fflush(stdin);
		printf("å ����: ");
		gets(mybook[*totalBCnt].bookTitle);
		fflush(stdin);
		printf("å ����: ");
		gets(mybook[*totalBCnt].bookauthor);
		fflush(stdin);
		printf("å ����: ");
		scanf("%d", &mybook[*totalBCnt].bookprice);
		fflush(stdin);
		printf("å �Ǹż���: ");
		scanf("%d", &mybook[*totalBCnt].bookSale);
		fflush(stdin);
		printf("å �ڵ�(xxxx-xxx): ");
		scanf("%s",&mybook[*totalBCnt].bookCode);
		spn = strspn(mybook[*totalBCnt].bookCode,"0123456789-");
		while(8!=spn){
		printf("\n�ٽ� �Է����ּ���\n");
		printf("å �ڵ�(xxxx-xxx): ");
		scanf("%s",&mybook[*totalBCnt].bookCode);
		spn = strspn(mybook[*totalBCnt].bookCode,"0123456789-");
		}
		totalBCnt++;
		
		mybook = (BOOK*)realloc(mybook,sizeof(BOOK)*(*totalBCnt+1));
		
		fflush(stdin);
		printf("�Է��� ����Ͻðڽ��ϱ�? (y / n) : ");
		scanf("%c", &in);
		fflush(stdin);
		
		if(in=='n') break;
	}

	return mybook;
}

int pointer(const void *a, const void *b){
	BOOK* aa =(BOOK*)a;
	BOOK* bb = (BOOK*)b;
	return (-1 * (aa -> bookSale - bb -> bookSale));
}

void outBook(BOOK* mybook, int* totalBCnt) {
	int i,sel,count=0,n;
	char ch[9],*sub,in,since[5];
	puts("1. ��ü���");
	puts("2. �������");
	puts("3.����Ʈ����TOP3");
	scanf("%d",&sel);
	switch(sel){ 
	
	case 1: for (i = 0; i < *totalBCnt; i++) {
		printf("-------------------------------------------------\n");
  		printf("å ����: %s\n",mybook[i].bookTitle);
		printf("å ����: %s\n",mybook[i].bookauthor);
		printf("å ����: %d\n",mybook[i].bookprice);
		printf("å �Ǹż���: %d\n", mybook[i].bookSale);
		printf("å �ڵ� : %s\n", mybook[i].bookCode);
	}break; //for
	
	//do{
	case 2: printf("���� ���� �Է� : ");	scanf("%s",&since);
	for (i = 0; i < *totalBCnt; i++) {
 		 strcpy(ch,mybook[i].bookCode);
		  sub = strtok(ch,"-");
 		  	  
		 if(!strcmp(sub,since)){
		 count++; 
		 printf("-------------------------------------------------\n");
  		printf("å ����: %s\n",mybook[i].bookTitle);
		printf("å ����: %s\n",mybook[i].bookauthor);
		printf("å ����: %d\n",mybook[i].bookprice);
		printf("å �Ǹż���: %d\n", mybook[i].bookSale);
		printf("å �ڵ� : %s\n", mybook[i].bookCode);
		printf("\n�˻� ����� �� %d�� �Դϴ�.",count);
	//	printf("�Է��� ����Ͻðڽ��ϱ�? (y / n) : ");		scanf("%c", &in);
		}//if
 	}//for
  //	}while(in='y'||in !='n'); break;
  	
  	case 3: qsort(mybook,*totalBCnt,sizeof(BOOK),pointer);
	  for(n=0; n<3; n++){
	  printf("--------------------------\n");
	  printf("����Ʈ���� TOP3");
	  printf("%d. %s/n",n+1,mybook[n].bookTitle);
	  }
				  }//switch
}

void searchBook(BOOK* mybook, int* totalBCnt) {
	int sel,i;
	char t[50], a[20],in; //���� �˻� ��� ����, ���� �˻� ��� ���� 
	puts("���ϴ� �޴��� �����ϼ���");
	puts("1. å���� �˻�");
	puts("2. ���� �˻�");
	scanf("%d", &sel);
	fflush(stdin);
	switch (sel) {
	//	do{
	case 1: printf("�˻��� ������ �Է��ϼ��� : ");
		 gets(t);
		 for(i=0; i<*totalBCnt; i++){
	  	 if(!strstr(mybook[i].bookTitle,t)){ //���ڿ��� �ٸ��� true
			printf("å ����: %s\n",mybook[i].bookTitle);
			printf("å ����: %s\n",mybook[i].bookauthor);
			printf("å ����: %d\n",mybook[i].bookprice);
			printf("å �Ǹż���: %d\n", mybook[i].bookSale);
			printf("å �ڵ� : %s\n", mybook[i].bookCode);
		}
		else if (strstr(mybook[i].bookTitle,t))	printf("ã���ô� ����� �����ϴ�.");
			//printf("�˻��� ����Ͻðڽ��ϱ�? (y / n) : ");		scanf("%c", &in);
		 } break;
		// }while(in='y'||in !='n');
	// do{
	case 2: printf("�˻��� ���ڸ� �Է��ϼ��� : ");
		 gets(a);
		 for(i=0; i<*totalBCnt; i++){
		 	if(!strcmp(a,mybook[i].bookauthor)){ //���ڿ��� �ٸ��� true
			printf("å ����: %s\n",mybook[i].bookTitle);
			printf("å ����: %s\n",mybook[i].bookauthor);
			printf("å ����: %d\n",mybook[i].bookprice);
			printf("å �Ǹż���: %d\n", mybook[i].bookSale);
			printf("å �ڵ� : %s\n", mybook[i].bookCode);
		}
		else printf("ã���ô� ����� �����ϴ�.");
		//printf("�˻��� ����Ͻðڽ��ϱ�? (y / n) : ");		scanf("%c", &in);
		 } break;
	default :puts("1~2 ������ �޴� ��ȣ�� �Է��ϼ���");
//	}while(in='y'||in !='n');
}//switch
}
