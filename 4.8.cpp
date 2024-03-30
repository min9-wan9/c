#include<stdio.h>
#include<stdbool.h>
void nhap(int *arr, int *n)
{
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
bool mangThuanNghich(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]!=arr[n-1-i])
		return false;
	}
	return true;
}
int main()
{int n=0;
int arr[100];
nhap(arr,&n);
if(mangThuanNghich(arr,n)){
	printf("day la mang thuan nghich");
}else{
	printf("day khong phai mang thuan nghich");
}
return 0;
}

