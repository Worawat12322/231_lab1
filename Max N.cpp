#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int num[N];
	int i,l;
	for(l=1;l<N;l++)
	{
	scanf("%d",&num[l]);		
	}
	int max=num[0],locate=0;
	for(i=1;i<N;i++)
	{
		if(max<num[i])
		{
			max = num[i];
			locate = i+1;
		}
	}
	printf("%d %d",locate,max);
	return 0;
}
