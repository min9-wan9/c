#include<stdio.h>

int main()
{
	int n;
	int gan=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		
		for(int j=gan;j<gan+n;j++){
			printf("%d ",j);
			
		}
		gan+=n;
		printf("\n");
	}
	printf("\n");
	gan=1;
	for(int i=1;i<=n;i++){
		for(int j=gan;j<gan+n;j++){
			printf("%d ",j);
		}
		gan++;
		printf("\n");
	}
	printf("\n");
	
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			if(j>i) printf("~");
			else printf("%d",i);
		}
		printf("\n");
	}
	printf("\n");
	for (int i=1;i<=n;i++){
		int kc=n-1;
		int khoitao=i;
		for(int j=1;j<=i;j++){
			printf("%d ", khoitao);
			khoitao+=kc;
			kc--;
		}
		printf("\n");
	}
	return 0;
}

