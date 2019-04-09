//이름을 받고 실행할 때마다 횟수가 쌓이도록 한다. 
#include <stdio.h>

int main(){
	char name[4];
	int count=1;
	FILE* fp1;
	fp1 = fopen("d.txt","r+");
	if(fp1==NULL){
	fp1 = fopen("d.txt","w"); //입출력 둘다 가능한데 파일이 없으면 실패 
	printf("환영합니다~!\n이름을 입력하세요 : ");
	gets(name); //name에 입력 받는다. 
	fprintf(fp1,"%s %d",name, count); //name과 count를 파일로 출력한다. 
	fclose(fp1);//r+모드인 fp1 통로를 닫는다. 
	}

	fscanf(fp1,"%s %d",name, &count); //fp1(통로)으로 name과 count를 파일에서 입력받는다.  
	printf("%s님, %d번째 방문하셨습니다.",name,++count); //name과 count를 넣어 출력한다. 
	
	rewind(fp1); //커서를 앞으로 되감는다. 
	fprintf(fp1,"%s %d",name, count); //name과 증가한 count를 다시 파일에 출력한다. 
	fclose(fp1);
	
	return 0;
}
