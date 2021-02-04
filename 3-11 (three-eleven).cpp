#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	printf("%d %d",N%3,N%11);
	unsigned int N;
	scanf("%u",&N);
	printf("%u %u",N%3,N%11);
	return 0;
}
