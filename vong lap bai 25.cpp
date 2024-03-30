#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double sum=1;
	for (int i=1;i<n;i++){
		int gan=1;
		for(int j=1;j<=i;j++){
			gan*=j;
		}
		sum+=1.0/gan;
	}
	printf("%.4lf",sum);
	return 0;


}

