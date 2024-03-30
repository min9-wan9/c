#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
bool chuaXh(int *arr, int n, int x){
	int i;
	for(i=0; i<n;i++){
		if(arr[i]==x){
			return false;
		}
		
	}
	return true;
}
void nhap(int *arr, int &n){//tai sao gan *n thi duoc con n thi khong?
	while(n<=0){
		printf("nhap n>0: ");
		scanf("%d",&n);
	}

	int i=0;
	srand(time(0));
	while( i<n){
		int x=rand();
		if(chuaXh(arr,i,x)){
			arr[i++]=x;// gan arr[i]=x ---i++
			
		}
	}
}
void xuat(int *arr, int n){
	int i;
	for(i=0;i<n;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
int main()
{int n=0;
int arr[100];
nhap(arr,n);
xuat(arr,n);
return 0;


}

