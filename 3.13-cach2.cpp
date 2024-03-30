#include<stdio.h>
int nhapN(){
	int n=0;
	while(n<=0){
		printf("nhap n>0: ");
		scanf("%d",&n);
		
	}
	return n;
}

void soNguyenTo(int n){
	int count=0,i=2,j;
	int k=0;
	printf("\n %d so nguyen to dau tien la: ",n);
	while(count<n){
		for(j=2;j<i;j++){
			if (i%j==0){
				k++;
			}
		}
		if (k == 0){
			count++;
			printf("%d",i);
			if (count<n){
				printf(";");
			}
		}
		k=0;
		i++;
	}
}

void soChinhPhuong(int n){
	int count=0,i=2;
	printf("\n %d so chinh phuong dau tien la: ",n);
	while (count<n){
		printf("%d",i*i);
		count++;
		if (count!=n){
			printf(";");
		}
		i++;
	}
}

long long fibo(int n){
	if (n==0 || n==1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}

int main()
{
int n,i;
n = nhapN();
soNguyenTo(n);
soChinhPhuong(n);
printf("\n");
printf("\n %d so fibo dau tien la:",n);
for(i=0;i<n;i++){
	printf ("\n fibo(%d)=%d",i,fibo(i));
}
return 0;


}

