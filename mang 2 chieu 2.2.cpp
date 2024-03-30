#include<stdio.h>
#define N 100
void  nhap(int arr[N][N] , int m,int n){
	puts("\nnhap cac phan cua mang: ");
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
}
void xuat(int arr[N][N],int m,int n){
	int i,j;
	puts("cac phan tu cua mang");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
int arr[N][N];

int m,n;
puts("nhap so hang,so cot: ");
scanf("%d%d", &m, &n);
nhap(arr,m,n);
xuat(arr,m,n);

return 0;
}
