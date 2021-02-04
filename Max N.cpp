#include<stdio.h>
int main(){
	int N;
	scanf("%d");
	int num[N];
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
