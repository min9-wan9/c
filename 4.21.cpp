#include<stdio.h>
void nhap(int A[50][50],int B[50][50],int *m, int *n){
	*m=0,*n=0;
	while(*m<=0|| *n<=0){
	
		printf("nhap so hang, so cot: ");
		scanf("%d%d",m,n);
	}
	int i,j;
	printf("nhap mang A: \n");
	for(i=0;i<*m;i++){
	
		for(j=0;j<*n;j++){
		
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	printf("nhap mang B: \n");
	for(i=0;i<*m;i++){
	
		for(j=0;j<*n;j++){
		
			printf("arr[%d][%d]= ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
}
void xuat(int A[50][50], int B[50][50], int m, int n){
	int i,j;
	printf("mang A: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" %d ", A[i][j]);
			
		}
		printf("\n");
	}
	printf("mang B: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" %d ",B[i][j]);
			
		}
		printf("\n");
	}
}
void hienThi(int C[50][50], int m, int n){
	int i,j;
	printf("mang C:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" %d ",C[i][j]);
	}
	printf("\n");
}}
void ketQua(int A[50][50], int B[50][50], int C[50][50], int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		
			C[i][j]=A[i][j] + B[i][j];
		}
	}
	hienThi(C,m,n);
}
int main()
{int m,n;
int A[50][50];
int B[50][50];
int C[50][50];
nhap(A,B,&m,&n);
xuat(A,B,m,n);
ketQua(A,B,C,m,n);
return 0;


}

