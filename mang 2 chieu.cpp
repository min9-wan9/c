#include<stdio.h>
#define N 10
int xuat(int arr[][4],int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	
}

int main()
{
	int arr[3][4]={//int ten_mang[so_hang][so_cot];
	{1,2,3,4},
	{5,6,7,8,},
	{1,2,3,4}
	};

	int m = sizeof(arr)/sizeof(int);//so phan tu cua mang
	int n = sizeof(arr[0])/sizeof(int);//so cot
	
	m/=n;//so hang
	xuat(arr,m,n);
	
	


}

