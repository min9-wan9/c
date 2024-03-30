#include<stdio.h>
#include<math.h>

int main()
{
	long long a,b;
	puts("nhap b>a>0");
	scanf("%ld%ld",&b,&a);
	if (b>a && a>0){
		long long i,n;
		int sum=0;
		for (i=a;i<=b;i++ ){
			for(n=2;n<i;n++){
				if (i%n==0){
					sum++;
				}
			}
			if (sum ==0){
				printf("%d;",i);
				
			}else{
				sum=0;
			}
		}

		}else{
			printf("vui long nhap b>a>0 !");
			
		}


}

