#include<stdio.h>

int fibo(int n);
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Fibonacci series of %d terms: ", n);
	for(int i=0;i<n;i++){
		printf("%d\n",fibo(i));
	}
	printf("\n");
	return 0;
}

int fibo(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibo(n-1)+fibo(n-2);
}