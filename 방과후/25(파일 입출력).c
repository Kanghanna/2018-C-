#include <stdio.h>

int main(){
	char a[256],b[256];
	int i;
	FILE* fp;
	FILE* fp2;
	
	fp = fopen("a.txt","r");
	gets(b);
	if(fp==NULL) printf("파일 열기를 실패했습니다.");
	fp2 = fopen(b,"w");
	while(fgets(a,256,fp))
 	fputs(a,fp2);
 	
	fclose(fp);
	fclose(fp2);
	
	return 0;
}
