#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n==1) printf("-1");
	else {
		if(n%2==0){
			printf("%d\n",n/2);
			for(int i=1;i<=n/2;i++){
				printf("2 ");
			}
		}
		else {
			printf("%d\n",n/2);
			for(int i=1;i<=n/2 -1;i++){
				printf("2 ");
			}
			printf("3");
		}
	}
	return 0;

}

