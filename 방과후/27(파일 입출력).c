//���� 5�� �Է� �޾Ƽ� ���Ͽ� �ְ� ���� ��� 
#include <stdio.h>

int main(){
	int i,num[5],sub=0;
	FILE* fp1;
	
	//Ű����� �Է¹޾� ����ͷ� �����
 	fp1 = fopen("c.txt","w+");
 	printf("���� 5�� �Է� : ");
 	for(i=0; i<5; i++){
	 scanf("%d",&num[i]);
	 fprintf(fp1,"%d ",num[i]); 
	 }
	 
 	 for(i=0; i<5; i++){
 	 sub += num[i];
	 }
	 printf("5���� �� : %d",sub); 
	 
	 fclose(fp1);
	 
	 return 0;
}
 
