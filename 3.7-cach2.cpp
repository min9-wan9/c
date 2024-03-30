#include<stdio.h>

int nhapK(){
	int k=0;
	while(k <= 0){
		printf("nhap k>0: ");
		scanf("%d",&k);
	}
	return k;
}
int thuanNgich(int n){
	int gan=n,somoi=0;
	while(n>0){
		somoi=somoi*10+n%10;
		n/=10;
	}
	return somoi == gan;
}



int main()
{int k,i;
k=nhapK();

for(i=10000000;i<=99999999;i++){
	if (thuanNgich(i)  && i%k ==0 ){
		printf("%10d",i);
	}
}


}

