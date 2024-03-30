/*#include<stdio.h>

int main()
{
	int k;
	puts("nhap k>0");
	scanf("%d",&k);
	if (k>0){
		 int i;
		for (i=10000000;i<=99999999;i++){
			int m=i,b=0;
			int c=m%10;
			while (m!=0){
			
				c=m%10;
				b=b*10 + c;
				m/=10;
							
			}
			if (b==i && b%k == 0){
				printf("%10d",i);
			}
			
		}
	}else{
		printf("vui long nhap k>0");
	}


}*/
// cach 2

#include<stdio.h>
#include<stdbool.h>

bool thuannghich(int n){
	int m=n;
	int tg=0;
	while (n!=0){
		tg=tg*10 +n%10;
		n/=10;
		
	}
	return tg == m;
	
}
bool chiahet(int n, int k){
	if (k ==0)
	return false;
	else
	return n%k==0;
	
}
int main(){
	int i,k;
	puts("nhap so duong k");
	scanf("%d",&k);
	if (k>0){
		for (i=10000000;i<=99999999;i++){
			if (thuannghich(i) && chiahet(i,k)){
				printf("%10d",i);
			}
		}
	}else{
		printf("vui long nhap k>0 !");
	}
}

