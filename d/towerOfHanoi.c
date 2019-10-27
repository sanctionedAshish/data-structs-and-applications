#include<stdio.h>
int hanoi(int, char, char, char);
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("\nNumber of counts: %d\n", hanoi(n, 'S','D','A'));
	return 0;
}
int hanoi(int nums, char from, char dest, char aux){
	int count;
	if(nums==1){
		printf("\nMove disk %d from %c to %c", nums, from, dest);
		return 1;
		}
	count = hanoi(nums-1, from, aux, dest);
	printf("\nMove disk %d from %c to %c", nums, from, dest);
	++count;
	count+=hanoi(nums-1, aux, dest, from);
	return count;
}