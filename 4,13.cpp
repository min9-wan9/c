#include<stdio.h>
void hienThi(int *arr, int n);
void nhap(int *arr, int *n){
	while(*n<=0){
		printf("nhap n>0: ");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
int nhapK(int n){
	int k=-1;
	while(k<0 || k>=n){
		printf("nhap k ( 0<= k < n):");
		scanf("%d",&k);
	}
	return k;
}

void xoa(int *arr, int n, int k){
	int i;
	for(i=k;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	
	hienThi(arr, n);
}
void hienThi(int *arr, int n){
	int i;
	for(i=0;i<n-1;i++){
		printf("arr[%d]=%d\n",i, arr[i]);
	}
	
}
int main()
{int n=0;
int arr[100];

nhap(arr,&n);
int k=nhapK(n);

xoa(arr, n,k);
return 0;

}

