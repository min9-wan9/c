#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int count=0;
	for(i=1;i<=n;i++){
		if (n%i==0) count++;
	}
	printf("%d\n",count);
	for(i=1;i<=n;i++){
		if(n%i==0) {printf("%d ",i);
		}
	}
	return 0;

}

