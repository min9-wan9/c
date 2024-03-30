#include<stdio.h>
 int nhapN(int n){
 	n=-1;
 	while(n<0){
 		printf("nhap n: ");
 		scanf("%d",&n);
	 }
	 return n;
 }
 void nhapHeSo(int *arr, int n){
 	int i;
 	printf("nhap he so: \n");
 	for(i=0;i<=n;i++){
 		scanf("%d",&arr[i]);
	 }
 }
 void ketQua(int *arr, int n, int x){
 	int i,tong=0,gan=1;
 	for(i=1;i<=n;i++){
 		tong+=i*gan*arr[i];
 		gan*=x;
	 }
	 printf("dao ham P= %d",tong);
 }
int main()
{int n=nhapN(n);
int x;
int arr[100];
printf("nhap x: ");
scanf("%d",&x);
nhapHeSo(arr,n);
ketQua(arr,n,x);
return 0;


}

