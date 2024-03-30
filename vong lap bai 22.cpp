#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("*");
			
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			if(j>i)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if(j<=i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==1 || j==i|| i==n){
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	return 0;


}

