#include<stdio.h>
// sap xep chon loc
// O(n^2)
// tu tuong: moi buoc se dua phan lon nhat chua dc sap xep len;
void selectionsort(int a[], int n){
	for(int i=0;i<n;i++){
		int minpos=i;// dat vi tri dau tien chua dc sap xep
		for(int j=i+1;j<n;j++){
			if(a[j]>a[minpos]) minpos=j;// tim vi tri lon nhat 
		}
		int tmp=a[i];
		a[i]=a[minpos];
		a[minpos]=tmp;
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
	selectionsort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
	


}

