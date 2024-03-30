#include<stdio.h>
void nhap (int *arr,int *n){
	while (*n<=0){
		printf("nhap n>0: ");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
} 
int  tong_chan(int *arr,int n,int tongC){
	tongC=0;
	int i;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			tongC+=arr[i];
		}
	}
	return tongC;
}
int tong_le(int *arr,int n,int tongL){
	tongL=0;
	int i;
	for(i=0;i<n;i++){
		if(arr[i]%2!=0){
			tongL+=arr[i];
		}
	}
	return tongL;
}

int main()
{int n=0;
int arr[100];
nhap(arr,&n);
int tongC,tongL;

printf("\ntongL=%d\ntongC=%d",tong_le(arr,n,tongL),tong_chan(arr,n,tongC));
return 0;

}

