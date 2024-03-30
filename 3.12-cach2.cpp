#include<stdio.h>

int nhapN(){
	int n=0;
	while(n<=0){
		printf("nhap n>0: ");
		scanf("%d",&n);
	}
	return n;
}

void cacUoc(int n){
	int i=2;
	printf("cac uoc la: \n");
	for(i=2;i<=n;i++){
		if (n%i ==0){
			printf("%d",i);
			if (i!=n){
				printf(";");
			}
		}
	}
}

int soUoc(int n){
	int i,count=0;
	for(i=2;i<=n;i++){
		if (n%i==0){
			count++;
		}
	}
	return count;
}

void uocNguyenTo(int n){
	int i,j,count=0;
	printf("cac uoc nguyen to la: \n");
	for (i=2;i<=n;i++){
		if (n%i==0){
			for (j=2;j<i;j++){
				if (i%j ==0){
					count++;
				}
			}
			if (count==0){
				printf("%d",i);
				if (i!=n){
					printf(";");
				}
			}
		}
		count=0;
	}
}



int main()
{
	int n;
	n = nhapN();
	cacUoc(n);
	printf("\n");
	printf("so uoc la: %d",soUoc(n));
	printf("\n");
	uocNguyenTo(n);
	return 0;


}

