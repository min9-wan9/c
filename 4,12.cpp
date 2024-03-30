#include<stdio.h>
void nhap(int *arr , int *n){
	while(*n<=0){
		printf("nhap n>0: ");
		scanf("%d",n);
	}
	int i;
	for(i=0; i<(*n-1); i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
int nhapK(int k,int n){
	k=-1;
	while(k<0 || k>=n){
		printf("nhap k(0<= k <n): ");
		scanf("%d",&k);
	}
	
	return k;
}
void chen(int *arr, int n, int k, int x){
	int i;
	for(i=n-1;i>k;i--){
		arr[i]=arr[i-1];// chen vao vi tri k gia tri cua x nhap n-1 phantu can chuyen cai nay tu dau day 
		
	}
	arr[k]=x;
}
void hienThi(int *arr, int n){
	int i;
	for(i=0; i<n;i++){
		printf("%-10d", arr[i]);
	}
}
int main()
{int n=0,k,x;
int arr[100];

nhap(arr,&n);
k=nhapK(k,n);

printf("nhap x: ");
scanf("%d",&x);
chen(arr,n,k,x);
hienThi(arr,n);
return 0;

}

