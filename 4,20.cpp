#include<stdio.h>// chuyen hang thanh cot

void nhap(int *m, int *n,int arr[50][50]){
	*m=0,*n=0;
	while(*m<=0 || *n <=0){
		printf("nhap so hang, so cot: ");
		scanf("%d%d",m,n);
	}
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++){
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
} 
void hienThi(int arr[50][50], int m, int n){
	int i,j;
	for(i=0; i<m;i++){
		for(j=0;j<n;j++){
			printf(" %d ", arr[i][j]);
		}
		printf("\n");
	}
}

void chuyenVi(int arr[50][50],int b[50][50] ,int n, int m){
	
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[i][j]=arr[j][i];
		}
	}
}
	


int main()
{int m, n;
int arr[50][50];
int b[50][50];
nhap(&m, &n, arr);
chuyenVi(arr,b,n,m);
printf("mang A:\n");

hienThi(arr,m,n);

printf("mang B:\n");

hienThi(b,n,m);
return 0;


}

