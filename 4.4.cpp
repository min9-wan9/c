#include<stdio.h>
void nhap (int *arr, int *n){
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
int  dem(int *arr, int m,int n){
	int i,dem=0;
	for(i=0;i<n;i++){
		if(arr[i]==m){
			dem++;
		}
	}
	return dem;
}
int main()
{int n=0,m;
int arr[100];
nhap(arr,&n);
printf("\n nhap m: ");
scanf("%d",&m);
dem(arr,m,n);
printf("so lan: %d",dem(arr,m,n));

return 0;


}

