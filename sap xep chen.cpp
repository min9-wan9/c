#include<stdio.h>
// insertionsort -sap xep chen
// o(n^2)
// tu tuong : o moi buoc them phan tu dang xet vao day cac phan tu dc sap xep trc do

void insertionsort(int a[], int n){
	for(int i=1;i<n;i++){
		int pos=i-1, value=a[i];
		while(pos>=0 && value<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=value;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;


}

