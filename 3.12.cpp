#include<stdio.h>
#include<math.h>

int main()
{int n;
puts("nhap n>0");
scanf("%d",&n);
if (n<=0){
	printf("vui long nhap n>0 !");
	
} else{
	int i,count=0,dem=0;
	printf("cac uoc la:\n");
	for(i=2;i<=n;i++){
		if (n%i == 0){
			printf("%d",i);
			count++;
			if (i==n){
				printf("\n");
			}else{
				printf(";");
			}
		}
		
	}
	printf("so uoc:%d\n",count);
	int j=0;
	printf("cac uoc nguyen to:\n");
	for (i=2;i<=n;i++){
		if (n%i ==0){
		for (dem=2;dem<i;dem++){
			if (i%dem == 0){
				j++;
			}
		}
		if (j ==0){
			printf("%d;",i);
		}else{
			j=0;
		}
		
		}
	}
}


}

