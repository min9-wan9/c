#include<stdio.h>
void hienThi(int *b, int *dem, int n);
void nhap(int *arr, int *n){
	while(*n<=0){
		printf("nhap n>0: ");
		scanf("%d",n);
	}
	int i; 
	for(i=0; i<*n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
int chiSo(int *b, int n, int x){
	int i;
	for(i=0; i< n;i++){
		if(b[i ]== x){
			return i;
		}
	}
	return -1;
}
void count(int *arr, int n){
	int b[100];
	int dem[100];
	int i, size=0;
	for(i=0;i<n;i++){
		dem[i]=0;
	}
	for(i=0;i<n;i++){
		int index=chiSo(b,size,arr[i]);
		if(index==-1){
			b[size]=arr[i];
			dem[size]=1;
			size++;
		}else{
			dem[index]++;
		}
	}
	hienThi(b,dem,size);
}
void hienThi(int *b, int *dem, int n){
	int i;
	for(i=0; i<n;i++){
		printf("%d : %d \n",b[i],dem[i]);
	}
}
int main()
{int n=0;
int arr[100];
nhap(arr,&n);
count(arr, n);
return 0;

}

