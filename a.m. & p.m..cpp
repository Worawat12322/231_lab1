#include<stdio.h>
int main(){
	float time;
	int hr,min;
	scanf("%f",&time);
	if(time<12)
	{
		hr=(time*100)/100;
		min=(time*100);
		min=min%100;
		printf("%d:%d a.m",hr,min);
	}
	else if(time>=12)
	{
		hr=(time*100)/100;
		min=(time*100);
		min=min%100;
		if(hr>12)
		{
			hr=hr-12;
		}
		if(min==0)
		{
			printf("%d:0%d p.m",hr,min);	
		}
		else 
			printf("%d:%d p.m",hr,min);
	}
	
	return 0;
}
