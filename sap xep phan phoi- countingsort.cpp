#include<stdio.h>
#include<math.h>
// sap xep phan phoi
// O(N+k)
// tu tuong: dem so lan xuat hien cua cac phan tu, sau do in ra theo thu tu tu be den lon
// dieu kien: cac phan tu khong am, co gia tri nho hon 10^7
// khai bao mot mang co k+1 phan tu, k la phan tu lon nhat trong mang

int count[10000001];
void countingsort(int a[], int n){
	int K=-1e9;
	for(int i=0;i<n;i++){
		count[a[i]]++;
		K=fmax(K,a[i]);
	}
	for(int i=0;i<=K;i++){
		for(int j=0;j<count[i];j++){
			printf("%d ",i);
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
	countingsort(a,n);
	return 0;


}

