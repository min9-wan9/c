#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,sum=0,j=1;
	for(i=1;i<=n;i++){
		j*=-1;
		sum+=i*j;
	} 
	printf("%d",sum);
	return 0;

}

