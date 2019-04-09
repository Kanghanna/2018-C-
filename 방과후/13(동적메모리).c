//숫자들을 입력하고 그 숫자들의 합을 구해라
#include <stdio.h>

int main(){
	int a,i,sub;
	int *ch;
	
	puts("입력할 개수를 입력하세요 : ");
	scanf("%d",&a);
	ch = malloc(a*sizeof(int));
	
	if(ch==NULL) printf("할당실패");
	
	for(i=0; i<a; i++){
		puts("숫자를 입력하세요 : ");
		 scanf("%d",&ch[i]);
		sub += ch[i];
	}
	printf("결과: %d",sub);
	
	free(ch);
	
	return 0;
} 
