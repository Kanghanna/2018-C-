#include <stdio.h>

int main(){
	char a[6];
	int i;
	FILE* fp;
	fp = fopen("a.txt","r");
	
	while(1){
	a[i] = fgetc(fp);
	if(a[i]!=EOF) break;
	
		fputc(a[i],stdout);
		i++;
	}
	fclose(fp);
}






















