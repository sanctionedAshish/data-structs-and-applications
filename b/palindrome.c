#include<stdio.h>
#include<stdlib.h>
int palin(char *, char *);
int main(){
	int n;
	printf("Enter string size: ");
	scanf("%d", &n);
	char *a = (char *)calloc(n, sizeof(char));
	printf("Enter string: ");
	scanf("%s", a);
	if(palin(a,a+n-1)){
		printf("Palindrome\n");
	}else{
		printf("Not a palindrome\n");
	}
	free(a);
	return 0;
}
int palin(char *a, char *e){
	if(*a == '\0')
		return 1;
	if(*a!=*e)
		return 0;
	return palin(++a, --e);
}