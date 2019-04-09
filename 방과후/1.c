#include <stdio.h>
//n을 입력받기
//1~n까지 3의 배수의 합을 출력

int sub(int);

int main(void) {
	int n;
	printf("정수 하나 입력 : ");
		scanf_s("%d",&n);
		
		sub(n);
		// f : 포맷(형식지정) , %로 시작하는 것은 형식 문자열
		// %d : decimal(정수) %s : string(문자열) %f : (실수) %p : pointer(주소)
		// IDE : 통합개발환경(소프트웨어 프로그램)
		//compiler(번역)
		//compile과 Link를 모두 해주는 것이 visual studio, IDE이다.
		// .c -> .obj(목적(object)을 가진 파일) -> .exe(실행 파일)
		//  compile                                 Link
		// dev 프로그램은 .obj가 아니라 .o 파일로 만들어짐 


		//fflush(stdin) : f+flush(standard in(표준 입력))   stdin / stdout
		//getchar는 편법

		//(conio.h)에 포함되어있는 입출력 함수
		// getc(stdin) : 버퍼가 존재, 표준입력(키보드)과 ()에서 받은 것도 가능
		//putc(stdout) : 버퍼가 존재
		//getch(void) : 입력한 것이 화면에 안나옴
		//putch(변수) : 버퍼가 no존재 
		//버퍼는 입력한 것을 화면에 보여줌(한번 더 확인하고 신중해야 할 상황에는 버퍼 있는거 쓰기)
		//getche() : 입력한 것이 화면에 나옴
		//getchar(void) : 표준입력(키보드)만 가능
		//putchar(void) : 표준출력만 가능
		
		//문자열 관련 입출력 함수
		//s : string   // \n (n : new line의 약자)
		//gets() : 
		//gets_s() : 개수 지정 가능
		//puts() :

		//자주 이용하는 함수
		//isalpha() (is + alpha) : 인수가 알파벳 문자인지 확인, 알파벳 문자면 true, 아니면 false
		//islower() (is + lower) : 인수의 문자가 소문자이면 true, 아니면 false
		//isupper() (is + upper) : 인수의 문자가 대문자이면 true, 아니면 false
		//tolower() (to + lower) : 인수의 문자를 소문자로 변환
		//toupper() (to + upper) : 인수의 문자를 대문자로 변환

		//(string.h) 함수
		//strlen() : 문자열의 NULL 전까지 길이를 반환
		//strcpy() : null문자를 포함하여 src의 문자열을 dest로 복사?
		//strncpy() : strcpy()함수 + 복사 갯수 지정
		// char *strcpy(char *dest, const char *src); (src의 문자열을 dest로 복사)
		// dest : 목적지, src(sorce) : 주소 
		//strcmp() (compair) : 문자열을 비교하여 다르면 true 같으면 false, 왼쪽 것이 크면 양수 리턴, 오른쪽 것이 크면 음수 리턴
		//strncmp() : strcmp()함수 + 비교 갯수 지정
		//strcat() (concation) : 문자열을 연결
		//strchr(문자열, 문자) : 앞에서부터 해당 문자 찾 
		//strrchr() (reverse) : 뒤에서부터 해당 문자 찾음
		//strspn(str1, str2) (spanic) : str1에서 str2가 존재하지 않게 된다
		//strcspn(str1, str2) :  
		//strstr() : 해당 문자열 자체를 찾는다 문자열이 시작하는주소를 리턴
		//strtok() (token : "공백,-,/" ): 해당되는 token이 나오면 그 token을 기준으로 문자열을 자름
		
		//수학 관련 함수(math.h) 
		//ceil :올림 함수 
		//round :반올림 함수 
		//floor : 내림 함수
		
		//stdlib.h
		//qsort(테이블의 포인터 주소,테이블에 들어있는 실제 데이터 개수,한개 요소의 크기,두요소를 비교하기 위한 함수포인터) : 
		//퀵 정렬. 내림차순이나 오름차순으로 정렬 
		//함수포인터는 비교함수를 직접 구현해야 한다. 
		
		//매크로 상수
		// #define 매크로명 값	(매크로상수는 이름을 대문자로 쓴다 (암묵적약속))
		// #define    MAX  100	(MAX는 100 이라는 값으로 설정해놓음)
		// 왜 쓸까? 1. 상수를 매우 많이 썼는데 값을 바꿔야할 때 편리 2. 용도에 따른 매크로명으로 코드 해석에 용이하다.
		//(signed) int a (항상 signed는 int 앞에 생략)
		// 만약에 unsigned
		//#define UNIT unsigned int

		//매크로 함수
		//함수 모양이지만 함수가 아님
		//함수 호출이 필요없음
		//왜 쓸까? 1. 함수 호출이 필요 없어서 프로그램의 실행 속도가 빨라짐
		//단점은? 1. 매크로함수를 사용할 때마다 코드가 복사되어 프로그램의 크기 커짐 2. 코드 해석이 어려움
		
		//동적 메모리 : 실행 시간에 이루어지는 메모리, 정확하지 않은 값이 사용되어야할 때 입력받은 값을 사용해야할 때 쓴다.
		//또한 프로그래머가 필요없을 때 수동적으로 지워야하며, 
		//malloc() : 
		//calloc(개수,크기) : malloc함수 + 0으로 값을 초기화 
		// c=malloc(50)   =  calloc(50,1)
		//realloc(재할당 메모리 포인터, 재할당 크기) : 이미 할당된 공간의 크기를 수정할 때 쓴다. 
		//free()

		//형변환 연산자(cast연산자)
		//malloc을 쓸 때 앞에 cast연산자
		 
		//함수명 (매개변수 / 인수)
		//매개변수 : paramiter(말그대로 변수) ex) sub( int a )
		//인수 : argument(구체적인 수) ex) sub( 5 )
		
		//파일 입출력 함수(stdio.h) 
		//컴퓨터의 파일 종류는 두가지 text / binary
		//text 파일은 아스키코드로 이루어진, 쉽게 말하면 메모장에서 편집 가능한 파일
		//binary 파일은 예를 들면 한글이나 워드에서 저장한 파일
		//프로그램을 실행하면 자동적으로 stdin,stdout,stdrr 스트림이 생성됨
		//파일을 입출력하기 위해 파일과 프로그램을 연결하는 통로 만드는 fopen함수를 이용
		
		// txt 파일 
	 	//"r"또는 "rt"(read text) : (입력용)읽기용 파일, 파일 없으면 실패
		//"w" (write): (출력용) 파일, 
		//"a" (apand): 편집용 파일, 
		//feof() : EOF이면 참을 리턴 (EOF : END OF FILE(파일 내용의 끝) 
		//rewind() : 파일의 커서를 맨 앞으로 되돌림 
		//fseek() : 내가 원하는 위치로 커서를 이동 시킴
		// (SEEK_SET :맨 앞부터) (SEEK_CUR : 지정한 곳부터) (SEEK_END : 맨 끝부터) 
		
		//binary 파일 
		// fread() : 
		// fwrite() : 
}

int sub(int n) {
	int a;
	for (int i = 0; i < n; i++) {
		if (i % 3 == 0)
			a += i;
	}
	return a;
}
