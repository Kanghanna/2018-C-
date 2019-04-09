#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct book {
	char bookTitle[50]; //도서명
	char bookauthor[20]; //저자
	char bookCode[9]; // xxxx-xxx(북코드) 
	int bookprice; //가격
	int bookSale; //판매수량
}BOOK;

BOOK* inBook(BOOK*, int*); //도서입력
void outBook(BOOK*, int*); //도서출력
int pointer(const void*,const void*);
void searchBook(BOOK*, int*); //도서검색
void saveBook(BOOK*, int*); // 파일에 도서 저장
void readBook(BOOK*, int*); // 파일의 도서를 읽어들임 

int main() {
	int sel, *totalBCnt = 0;
	BOOK* mybook;
	
	mybook = (BOOK*)calloc(sizeof(BOOK),1);
	
	readBook(mybook, totalBCnt);
	while (1) {
		puts("\n원하는 메뉴를 선택하세요");
		puts("1. 도서 입력");
		puts("2. 도서 출력");
		puts("3. 도서 검색");
		puts("0. 종료");
		scanf("%d", &sel);
		switch (sel) {
		case 1: mybook = inBook(mybook, totalBCnt); break;
		case 2: outBook(mybook, totalBCnt); break;
		case 3: searchBook(mybook, totalBCnt); break;
		case 0: saveBook(mybook, totalBCnt); return 0;
		default: puts("0~3 사이의 메뉴 번호를 입력하세요");
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
		printf("책 제목: ");
		gets(mybook[*totalBCnt].bookTitle);
		fflush(stdin);
		printf("책 저자: ");
		gets(mybook[*totalBCnt].bookauthor);
		fflush(stdin);
		printf("책 가격: ");
		scanf("%d", &mybook[*totalBCnt].bookprice);
		fflush(stdin);
		printf("책 판매수량: ");
		scanf("%d", &mybook[*totalBCnt].bookSale);
		fflush(stdin);
		printf("책 코드(xxxx-xxx): ");
		scanf("%s",&mybook[*totalBCnt].bookCode);
		spn = strspn(mybook[*totalBCnt].bookCode,"0123456789-");
		while(8!=spn){
		printf("\n다시 입력해주세요\n");
		printf("책 코드(xxxx-xxx): ");
		scanf("%s",&mybook[*totalBCnt].bookCode);
		spn = strspn(mybook[*totalBCnt].bookCode,"0123456789-");
		}
		totalBCnt++;
		
		mybook = (BOOK*)realloc(mybook,sizeof(BOOK)*(*totalBCnt+1));
		
		fflush(stdin);
		printf("입력을 계속하시겠습니까? (y / n) : ");
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
	puts("1. 전체출력");
	puts("2. 연도출력");
	puts("3.베스트셀러TOP3");
	scanf("%d",&sel);
	switch(sel){ 
	
	case 1: for (i = 0; i < *totalBCnt; i++) {
		printf("-------------------------------------------------\n");
  		printf("책 제목: %s\n",mybook[i].bookTitle);
		printf("책 저자: %s\n",mybook[i].bookauthor);
		printf("책 가격: %d\n",mybook[i].bookprice);
		printf("책 판매수량: %d\n", mybook[i].bookSale);
		printf("책 코드 : %s\n", mybook[i].bookCode);
	}break; //for
	
	//do{
	case 2: printf("발행 연도 입력 : ");	scanf("%s",&since);
	for (i = 0; i < *totalBCnt; i++) {
 		 strcpy(ch,mybook[i].bookCode);
		  sub = strtok(ch,"-");
 		  	  
		 if(!strcmp(sub,since)){
		 count++; 
		 printf("-------------------------------------------------\n");
  		printf("책 제목: %s\n",mybook[i].bookTitle);
		printf("책 저자: %s\n",mybook[i].bookauthor);
		printf("책 가격: %d\n",mybook[i].bookprice);
		printf("책 판매수량: %d\n", mybook[i].bookSale);
		printf("책 코드 : %s\n", mybook[i].bookCode);
		printf("\n검색 결과는 총 %d권 입니다.",count);
	//	printf("입력을 계속하시겠습니까? (y / n) : ");		scanf("%c", &in);
		}//if
 	}//for
  //	}while(in='y'||in !='n'); break;
  	
  	case 3: qsort(mybook,*totalBCnt,sizeof(BOOK),pointer);
	  for(n=0; n<3; n++){
	  printf("--------------------------\n");
	  printf("베스트셀러 TOP3");
	  printf("%d. %s/n",n+1,mybook[n].bookTitle);
	  }
				  }//switch
}

void searchBook(BOOK* mybook, int* totalBCnt) {
	int sel,i;
	char t[50], a[20],in; //제목 검색 결과 저장, 저자 검색 결과 저장 
	puts("원하는 메뉴를 선택하세요");
	puts("1. 책제목 검색");
	puts("2. 저자 검색");
	scanf("%d", &sel);
	fflush(stdin);
	switch (sel) {
	//	do{
	case 1: printf("검색할 제목을 입력하세요 : ");
		 gets(t);
		 for(i=0; i<*totalBCnt; i++){
	  	 if(!strstr(mybook[i].bookTitle,t)){ //문자열이 다르면 true
			printf("책 제목: %s\n",mybook[i].bookTitle);
			printf("책 저자: %s\n",mybook[i].bookauthor);
			printf("책 가격: %d\n",mybook[i].bookprice);
			printf("책 판매수량: %d\n", mybook[i].bookSale);
			printf("책 코드 : %s\n", mybook[i].bookCode);
		}
		else if (strstr(mybook[i].bookTitle,t))	printf("찾으시는 결과가 없습니다.");
			//printf("검색을 계속하시겠습니까? (y / n) : ");		scanf("%c", &in);
		 } break;
		// }while(in='y'||in !='n');
	// do{
	case 2: printf("검색할 저자를 입력하세요 : ");
		 gets(a);
		 for(i=0; i<*totalBCnt; i++){
		 	if(!strcmp(a,mybook[i].bookauthor)){ //문자열이 다르면 true
			printf("책 제목: %s\n",mybook[i].bookTitle);
			printf("책 저자: %s\n",mybook[i].bookauthor);
			printf("책 가격: %d\n",mybook[i].bookprice);
			printf("책 판매수량: %d\n", mybook[i].bookSale);
			printf("책 코드 : %s\n", mybook[i].bookCode);
		}
		else printf("찾으시는 결과가 없습니다.");
		//printf("검색을 계속하시겠습니까? (y / n) : ");		scanf("%c", &in);
		 } break;
	default :puts("1~2 사이의 메뉴 번호를 입력하세요");
//	}while(in='y'||in !='n');
}//switch
}
