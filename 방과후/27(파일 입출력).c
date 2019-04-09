//정수 5개 입력 받아서 파일에 넣고 합을 출력 
#include <stdio.h>

int main(){
	int i,num[5],sub=0;
	FILE* fp1;
	
	//키보드로 입력받아 모니터로 출력해
 	fp1 = fopen("c.txt","w+");
 	printf("정수 5개 입력 : ");
 	for(i=0; i<5; i++){
	 scanf("%d",&num[i]);
	 fprintf(fp1,"%d ",num[i]); 
	 }
	 
 	 for(i=0; i<5; i++){
 	 sub += num[i];
	 }
	 printf("5개의 합 : %d",sub); 
	 
	 fclose(fp1);
	 
	 return 0;
}
 
