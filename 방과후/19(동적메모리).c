//����ó�� kor, eng �Է��ϰ� ��� ���ϱ�
//��� ù��° �л� ���, �ι�° �л� ���, ����° �л� ���
// ���� �ԷµǸ� ���α׷� ����
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
 if(arr==NULL) printf("�Ҵ����");
 
 for(i=0; i<arr; i++){
 	fflush(stdin);
 	printf("%d��° �л��� ��������: ",i+1);
 	scanf("%d",&sj[i].kor); 
 	
 	if(sj[i].kor<0) break;
 	fflush(stdin);
 	printf("%d��° �л��� ��������: ",i+1);
 	scanf("%d",&sj[i].eng);
 	
 	sj[i].avg = (double)(sj[i].kor+sj[i].eng)/2.0;
 	
 	sj = (int*)realloc(sj, sj+1);
 }
 for(j=0; j<arr; j++){
 printf("%d",sj[j].avg);
 sum += sj[j].avg;
 }
printf("��ü ���: %d",sum /= arr);

return 0;
}

