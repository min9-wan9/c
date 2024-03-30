#include<stdio.h>
int nhap(int arr[],int n){
	int i;
	puts("\nnhap cac gia tri cua mang: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
}
int max(int arr[],int n){
	int gan=0,i;
	for(i=0;i<n;i++){
		if(arr[i]>gan){
			gan=arr[i];
		}
	}
	return gan;
}
int min(int arr[], int n){
	int min=arr[0],i;
	for(i=1;i<n;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
}
int main()
{int arr[1000];
int n=0;
while(n<=0){
printf("nhap n>0: ");
scanf("%d",&n);
}
nhap(arr,n);
int a,b;
a=max(arr,n);
b=min(arr,n);
if (a == b){
	printf("khong co min,max do min=max");
} else{
	printf("\nmax=%d",max(arr,n));
printf("\nmin=%d",min(arr,n));
}

return 0;
}

