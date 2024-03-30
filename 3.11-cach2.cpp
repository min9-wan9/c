#include<stdio.h>

int nhapn(){
	int n=0;
	while (n<=0){
		printf("nhap n>0 : ");
		scanf("%d",&n);
	}
	return n;
}

void phantich(int n){
	int b=10,a;
	int count=0;
	while(n>0){
		a=n%10;
		if (a<=b){
			count++;
			
		}
		b=a;
		n/=10;
	}
	if (count == 0){
		printf("\n cac so khong xep theo thu tu tang dan");
	}else{
		printf("\n cac so xep theo thu tu tang dan");
	}
	
}

int sodau(int n){
	int sodau;
	while (n>0){
	if (n/10 ==0){
			sodau=n%10;
		}
		n/=10;
		
	}
	return sodau;
}

int solan(int n){
	int sodau=0,a=n,count=0;
	while(n>0){
	if (n/10 ==0){
			sodau=n%10;
		}
		n/=10;
		
	}
	while(a>0){
		if (a%10 == sodau){
			count++;
		}
		a/=10;
	}
	return count;
	
}



int main()
{

int n;

n=nhapn();
phantich(n);
printf("\n so dau la: %d",sodau(n));
printf("\n so lan: %d",solan(n));

}

