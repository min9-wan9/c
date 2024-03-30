#include<stdio.h>
// ham phan hoach Lomuto: tra ve chi so cua kho (pivot)
// O(nlogn)
int partition(int a[], int l, int r){
	int i=l-1, pivot=a[r];
	for(int j=l;j<r;j++){
		// neu a[j]> pivot: bo qua
		if(a[j]<=pivot){
			++i;
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
			}
		++i;
		int tmp=a[i];
		a[i]=a[r];
		a[r]=tmp;
		printf("phan hoach tu chi so : %d toi %d \n",l,r);
		for(int i=l;i<=r;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
		return i;	
}
void quicksort(int a[], int l, int r){
	if(l<r){
		int pos=partition(a,l,r);
		// xet de quy ve day ben trai
		quicksort(a,l,pos-1);
		quicksort(a,pos+1,r);
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
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
	


}

