#include <stdio.h>

int main(){
	char a[100];
	int i;
	FILE* fp;
	
	fp = fopen("a.txt","r");
	while(fgets(a,100,stdin))
 	fputs(a,stdout);
 	
	fclose(fp);
	
	return 0;
}
