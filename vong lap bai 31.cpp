#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double sum=0;
	for(int i=1;i<=n;i++){
		long long gt=1;
		for(int j=1;j<=i;j++){
			gt*=j;
		}
		sum+=1.0/gt;
	}
	printf("%.2lf",sum);
	return 0;


}

