#include<stdio.h>
int nhapN(int n){
	n=-1;
while(n<0){
	printf("nhap n: ");
	scanf("%d",&n);
}
return n;
}
void nhapHeSo(int *arr,int *arr1 ,int n){
	int i;
	printf("nhap he so cua P: \n");
	for(i=0;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	printf("nhap he so cua Q: \n");
	for(i=0;i<=n;i++){
		scanf("%d",&arr1[i]);
	}
}
void ketQua(int *arr, int *arr1, int n, int x){
	int i, tong=0,gan=1;
	for(i=0;i<=n;i++){
		tong+=arr[i]*gan + arr1[i]*gan;
		gan*=x;
	}
	printf("S= %d",tong);
}
int main()
{int n=nhapN(n);
int arr[100];
int arr1[100];
int x;
printf("nhap x: ");
scanf("%d",&x);
nhapHeSo(arr,arr1,n);
ketQua(arr,arr1,n,x);
return 0;


}

