#include <stdio.h>

int main(){
	FILE* f;
	char c;
	
	f = fopen("f.txt","w");
	c = fgetc(f);
	
//	fputc(c,f);
	
	fclose(f);
	
	FILE* f;
	char c;
	
	f = fopen("f.txt","r");
	c = fgetc(f);
	
//	fputc(c,f);
	
	fclose(f);
	
	return 0;
}
