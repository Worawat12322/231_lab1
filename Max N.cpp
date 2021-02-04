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
	int l;
	for(l=0;l<N;l++)
	{
		printf("%d",num[l]);
	}
	return 0;
}
