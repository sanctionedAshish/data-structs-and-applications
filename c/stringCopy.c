#include<stdio.h>
#include<stdlib.h>
void copy(char [], char []);
int main(){
	int n;
	printf("Enter string size:");
	scanf("%d", &n);
	char* a = (char *)calloc(n,sizeof(char));
	char* b = (char *)calloc(n,sizeof(char));

	printf("Enter string: ");
	scanf("%s", a);
	//gets(a);
	copy(a,b);
	printf("String copied: %s",b);
	
	printf("\n");
	free(a);
	free(b);
	return 0;
}

void copy(char *a, char *b){
	if(*a=='\0')
		return;
	*b=*a;
	return copy(++a, ++b);
}
