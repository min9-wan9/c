#include<stdio.h>
void  nhap(int *arr,int *n) {
	while(*n<=0){
		printf("nhap n>0:  ");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}

	

int tong(int *arr, int n, int a, int b){
	int i, tong=0;
	for(i=0;i<n;i++){
		if(arr[i]>=a && arr[i]<=b){
			tong+=arr[i];
		}
	}
	return tong;
}
int main()
{int n=0,a=1,b=0;
int arr[100];
nhap(arr,&n);
while(a>b){
		printf("nhap a<b: ");
		scanf("%d%d",&a,&b);
	}

tong(arr,n,a,b);
printf("tong cac so trong khoang[%d,%d]=%d",a,b,tong(arr,n,a,b));

return 0;
}

