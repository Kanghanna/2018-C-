#include <stdio.h>
int main() {
	FILE* fp;
	int i;
	char c[6];
	
	fp = fopen("a.txt","w");
	
	for(i=0; i<5; i++){
		c[i] = fgetc(stdin);
		fflush(stdin);
	}
	for(i=0; i<5; i++){
		fputc(c[i],fp);
	}
	fclose(fp);
	return 0;
}
