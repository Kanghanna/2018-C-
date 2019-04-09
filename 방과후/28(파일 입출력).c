#include <stdio.h>
#include <stdlib.h>

typedef struct sj{
	char name[4];
	int kor;
	int eng;
	float avg; 
}SJ;

int main() {
	SJ* mysj;
	FILE* fp1;
	int total=0; char in;
	
	fp1 = fopen("sj.txt","a");
	
	mysj = (SJ*)calloc(sizeof(SJ),1);
	
	while(1){
	printf("이름 : ");
	scanf("%3s", mysj[total].name);
	fflush(stdin);
	printf("국어 : ");
	scanf("%3d", mysj[total].kor);
	fflush(stdin);
	printf("영어 : ");
	scanf("%3d", mysj[total].kor);
	fflush(stdin);
	mysj[total].avg = (mysj[total].kor + mysj[total].eng) / 2.0;
	printf("평균 : %4f",mysj[total].avg);
	
	fprintf(stdin,"%3s %3d %3d %4f\n",mysj[total].name ,mysj[total].kor ,mysj[total].eng ,mysj[total].avg);
	
	mysj = (SJ*)realloc(mysj, mysj+1);
	total++;
	
	printf("입력을 계속하시겠습니까? (y/n) : "); getche(in);
	if(in=='n') break;
	}
	
	fclose(fp1);
	
	return 0;	
} 
