#include<stdio.h>
void nhap(int *arr, int *n){
	while(*n<=0){
		printf("nhap n>0: ");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<(*n);i++){
		scanf("%d",&arr[i]);
	}
} 
void hienThi(int *arr, int n){
	int i;
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
}
void sapXep(int *arr, int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]>arr[i]){
				int tmp=arr[j];
				arr[j]=arr[i];
				arr[i]=tmp;
			}
		}
	}
}
void sapXep2(int *arr, int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if(arr[j]<arr[i]){
				int tmp=arr[j];
				arr[j]=arr[i];
				arr[i]=tmp;
			}
		}
	}
}

int main()
{int n=0;
int arr[100];
nhap(arr,&n);
printf("truoc khi sap xep:\n");
hienThi(arr,n);

sapXep2(arr,n);
printf("\nsau khi sap xep: ");
hienThi(arr,n);

sapXep(arr,n);
printf("\nsau khi sap xep2: ");
hienThi(arr,n);

return 0;
}

