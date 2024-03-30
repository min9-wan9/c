#include<stdio.h>
void nhapN(int *arr1, int *n){
	*n=0;
	while(*n<=0){
		printf("nhap n>0: ");
		scanf("%d",n);
	}
	int i;
	for(i=0; i<*n; i++){
		scanf("%d",&arr1[i]);
	}
}
void nhapM(int *arr2, int *m){
	*m=0;
	while(*m<=0){
		printf("nhap m>0: ");
		scanf("%d",m);
	}
	int i;
	for(i=0;i<*m;i++){
		scanf("%d",&arr2[i]);
		}
}
int nhapK(int n){
	int k=-1;
	while(k<0 || k>= n){
		printf("nhap k(0< k <=n): ");
		scanf("%d",&k);
	}
	return k;
}
void chen(int *arr1, int *arr2, int n, int m, int k){
	int i,j=0;
	for(i=k;i<n;i++){
		arr1[i+m]=arr1[i];
		
	}
	for(i=k;i<k+m;i++){
		arr1[i]=arr2[j];
		j++;
	}
	
}
void hienThi(int *arr1, int n, int m){
	int i;
	for(i=0;i<(m+n);i++){
		printf("arr1[%d]= %d\n",i,arr1[i]);
	}
}

int main()
{int m,n;
int arr1[100];
int arr2[100];
nhapN(arr1,&n);
nhapM(arr2,&m);
int k= nhapK(n);
chen(arr1, arr2, n,m,k);
hienThi(arr1, n,m);
return 0;

}

