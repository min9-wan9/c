#include<stdio.h>
void hienThi(int *arr, int n);
void nhap(int *arr, int *n){
	*n=0;
	while(*n<=0){
		printf("nhap n>0 :");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n-1; i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void sapXep(int *arr, int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(arr[i]>arr[j]){
				int tmp=arr[i];
				arr[i]= arr[j];
				arr[j]=tmp;
			}
		}
	}
}
void chen(int *arr,int n, int k,int x){
	int i;
	for(i=n-1;i>k;i--){
		arr[i]=arr[i-1];
	}
	arr[k]=x;
}
void themX(int *arr,int n, int x){
	int i,count =0;
	if (arr[n-2]< x){
		count =n-1;
		chen(arr,n,count,x);
	}else{
		for(i=0; i<n-1;i++){
		if (arr[i]>= x){
			count =i;
			chen(arr,n,count,x);
			
			break;
		}
	}
	}
	
	
	hienThi(arr,n);
}
void hienThi(int *arr, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%-10d",arr[i]);
	}
}
int main()
{int n;
int arr[100];
nhap(arr,&n);
sapXep(arr,n-1);

int x;
printf("nhap x: ");
scanf("%d",&x);
themX(arr, n,x);
return 0;


}

