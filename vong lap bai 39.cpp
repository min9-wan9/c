#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int kt;
	for(int i=1;i<=n;i++ ){
		if(i%2!=0)  kt=65-1+i;
		else  kt=97+i-1;
		for(int j=1;j<=n;j++){
			printf("%c",kt);
			kt++;
		}
		printf("\n");
	}
	return 0;


}

