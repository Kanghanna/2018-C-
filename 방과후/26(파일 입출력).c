//�̸��� �ް� ������ ������ Ƚ���� ���̵��� �Ѵ�. 
#include <stdio.h>

int main(){
	char name[4];
	int count=1;
	FILE* fp1;
	fp1 = fopen("d.txt","r+");
	if(fp1==NULL){
	fp1 = fopen("d.txt","w"); //����� �Ѵ� �����ѵ� ������ ������ ���� 
	printf("ȯ���մϴ�~!\n�̸��� �Է��ϼ��� : ");
	gets(name); //name�� �Է� �޴´�. 
	fprintf(fp1,"%s %d",name, count); //name�� count�� ���Ϸ� ����Ѵ�. 
	fclose(fp1);//r+����� fp1 ��θ� �ݴ´�. 
	}

	fscanf(fp1,"%s %d",name, &count); //fp1(���)���� name�� count�� ���Ͽ��� �Է¹޴´�.  
	printf("%s��, %d��° �湮�ϼ̽��ϴ�.",name,++count); //name�� count�� �־� ����Ѵ�. 
	
	rewind(fp1); //Ŀ���� ������ �ǰ��´�. 
	fprintf(fp1,"%s %d",name, count); //name�� ������ count�� �ٽ� ���Ͽ� ����Ѵ�. 
	fclose(fp1);
	
	return 0;
}
