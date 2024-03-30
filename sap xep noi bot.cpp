#include<stdio.h>
// sap xep noi bat-bubble sort
// O(n^2)
// tu tuong:dua phan tu lon nhat chua dc sap xep ve cuoi day
void bubblesort(int a[], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
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
	bubblesort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;


}

