#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=n;i++){
		if(i==1 ||i ==n){
			for(j=1;j<=n;j++){
				printf("*");
			}
		}
		else {
			for(j=1;j<=n;j++){
				if(j==1 || j==n) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=n;i++){
		if(i==1 ||i ==n){
			for(j=1;j<=n;j++){
				printf("*");
			}
		}
		else {
			for(j=1;j<=n;j++){
				if(j==1 || j==n) printf("*");
				else printf("#");
			}
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=n;i++){
		if(i==1 ){
			for(j=1;j<=n;j++){
				printf("1 ");
			}
		}
		else if(i==n){
			for(j=1;j<=n;j++){
				printf("%d ",n);
			}
		}
		else {
			for(j=1;j<=n;j++){
				if(j==1 || j==n) printf("%d ",i);
				else printf("  ");
			}
		}
		printf("\n");
	}
	return 0;

}

