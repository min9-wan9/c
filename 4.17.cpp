#include<stdio.h>
int nhap(int *n){
	*n=-1;
	while(*n<0){
		printf("nhap n>=0: ");
		scanf("%d",n);
	}
return *n;	
}
void nhapHeSo(int *arr, int n){
	int i;
	printf("nhap he so: \n");
	for(i=0; i<=n;i++){
		scanf("%d",&arr[i]);
	}
}
void ketQua(int *arr, int n, int x){
	int tong=0,i,gan=1;
	for(i=0;i<=n;i++){
		tong= tong+arr[i]*gan;
		gan*=x;
	}
	printf("P=%d",tong);
}
int main()
{int n,x;
int arr[100];

printf("nhap x: \n");
	scanf("%d",&x);
n=nhap(&n);
nhapHeSo(arr,n);
ketQua(arr,n,x);
return 0;


}

