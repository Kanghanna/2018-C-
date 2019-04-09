#include <stdio.h>
#include <string.h>
#define BOOK_AMOUNT 100
typedef struct book {
	char bookTitle[50]; //도서명
	char bookauthor[20]; //저자
	char bookCode[9]; // xxxx-xxx(북코드) 
	int bookprice; //가격
	int bookSale; //판매수량
}BOOK;

int inBook(BOOK*, int); //도서입력
void outBook(BOOK*, int); //도서출력
void searchBook(BOOK*, int); //도서검색

int main() {
	int sel, totalBCnt = 0;
	BOOK mybook[100];
	while (1) {
		puts("\n\n원하는 메뉴를 선택하세요");
		puts("1. 도서 입력");
		puts("2. 도서 출력");
		puts("3. 도서 검색");
		puts("0. 종료");
		scanf("%d", &sel);
		fflush(stdin);

		switch (sel) {
		case 1: totalBCnt = inBook(mybook, totalBCnt); break;
		case 2: outBook(mybook, totalBCnt); break;
		case 3: searchBook(mybook, totalBCnt); break;
		case 0: return 0;
		default: puts("0~3 사이의 메뉴 번호를 입력하세요");
		}//switch
	}//while
} //main

int inBook(BOOK* mybook, int totalBCnt) {
	int i;
	for (i = 0; i < BOOK_AMOUNT; i++) {
		getchar();
		printf("책 제목: ");
		gets(mybook[i].bookTitle);
		printf("책 저자: ");
		gets(mybook[i].bookauthor);
		printf("책 가격: ");
		scanf("%d", &mybook[i].bookprice);
		printf("책 판매수량: ");
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
  		printf("책 제목: %s\n",mybook[i].bookTitle);
		printf("책 저자: %s\n",mybook[i].bookauthor);
		printf("책 가격: %d\n",mybook[i].bookprice);
		printf("책 판매수량: %d\n", mybook[i].bookSale);
	}
	
}

void searchBook(BOOK* mybook, int totalBCnt) {
	int sel,i;
	char t[50], a[20]; //제목 검색 결과 저장, 저자 검색 결과 저장 
	puts("\n원하는 메뉴를 선택하세요");
	puts("1. 책제목 검색");
	puts("2. 저자 검색");
	scanf("%d", &sel);
	fflush(stdin);
	getchar();
	switch (sel) {
	case 1: printf("검색할 제목을 입력하세요 : ");
		 gets(t);
		 for(i=0; i<totalBCnt; i++){
	  	 if(!strcmp(t,mybook[i].bookTitle)) //문자열이 다르면 true
			printf("책 제목: %s\n",mybook[i].bookTitle);
			printf("책 저자: %s\n",mybook[i].bookauthor);
			printf("책 가격: %d\n",mybook[i].bookprice);
			printf("책 판매수량: %d\n", mybook[i].bookSale);
		 } break;
	case 2: printf("검색할 저자를 입력하세요 : ");
		 gets(a);
		 for(i=0; i<totalBCnt; i++){
		 	if(!strcmp(a,mybook[i].bookauthor)) //문자열이 다르면 true
			printf("책 제목: %s\n",mybook[i].bookTitle);
			printf("책 저자: %s\n",mybook[i].bookauthor);
			printf("책 가격: %d\n",mybook[i].bookprice);
			printf("책 판매수량: %d\n", mybook[i].bookSale);
		 } break;
	default :puts("1~2 사이의 메뉴 번호를 입력하세요");
	}
	
}
