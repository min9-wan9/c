#include<stdio.h>

int nhapN(){
	int n=0;
	while (n<=0){
		printf("nhap n>0: ");
		scanf("%d",&n);
	}
	return n;
}

int tong(int n){
	int sum=0;
	while (n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

void phantich(int n){
	int i=2;
	printf("\n%d= ",n);
	while (n>=i){
		if (n%i ==0){
			printf("%d",i);
			if (i!=n){
				printf("x");
				
			}
			n/=i;
		}else{
			i++;
		}
		
	}
	
	
}

int main()
{
int n;
n=nhapN();
phantich(n);
printf("\n");
printf("sum=%d\n",tong(n));
return 0;

}

