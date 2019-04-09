//성적처리 kor, eng 입력하고 평균 구하기
//출력 첫번째 학생 평균, 두번째 학생 평균, 세번째 학생 평균
// 음수 입력되면 프로그램 종료
#include <stdio.h>
typedef struct sungjuk{
 	int kor;
 	int eng;
 	int avg;
 }SUNGJUK;

int main(){
 
 int arr,i,j; double sum = 0.0;
 SUNGJUK *sj;
 
 arr = (SUNGJUK*)calloc(1,sizeof(SUNGJUK));
 if(arr==NULL) printf("할당실패");
 
 for(i=0; i<arr; i++){
 	fflush(stdin);
 	printf("%d번째 학생의 국어점수: ",i+1);
 	scanf("%d",&sj[i].kor); 
 	
 	if(sj[i].kor<0) break;
 	fflush(stdin);
 	printf("%d번째 학생의 영어점수: ",i+1);
 	scanf("%d",&sj[i].eng);
 	
 	sj[i].avg = (double)(sj[i].kor+sj[i].eng)/2.0;
 	
 	sj = (int*)realloc(sj, sj+1);
 }
 for(j=0; j<arr; j++){
 printf("%d",sj[j].avg);
 sum += sj[j].avg;
 }
printf("전체 평균: %d",sum /= arr);

return 0;
}

