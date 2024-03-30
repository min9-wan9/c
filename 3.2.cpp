#include<stdio.h>

int main()
{
	int m,n;
	puts ("nhap m,n>0");
	scanf("%d%d",&m,&n);
	if (m>0 && n>0){
		int count=0,dem=1;
		while (count<=m){
		
			while (dem<=n){
				printf("x   ");
		
				dem++;
				
				}
				if (dem == (n+1)){
					printf("\n");
					count++;
					dem=1;
				}
			}
		}
	
	else{
		printf("vui long nhap m,n>0 !");
	}


}

