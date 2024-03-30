#include<stdio.h>
void nhap(int *arr, int *n){
	*n=0;
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
void nhapK(int k, int n){
	k=-1;
	while(k<0 || k>=n){
		printf( "nhap k(0<= k<n): " );
		scanf("%d",&k);
	}
}
void xoa(int *arr, int *n, int k){
	int i;
	for(i=k-1;i<*n-1;i++){
		arr[i]=arr[i+1];
	
	}
	
}
void hienThi(int *arr, int n){
	int i;
	for(i=0; i<n-1;i++){
		printf("%10d",arr[i]);
	}
}
int main()
{int n,k;
int arr[100];
nhap(arr,&n);
nhapK(k,n);
xoa(arr,&n,k);
hienThi(arr,n);
return 0;

}

