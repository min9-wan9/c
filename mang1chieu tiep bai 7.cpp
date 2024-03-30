#include<stdio.h>
int check(int a[], int n){
	for(int i=0;i<n;i++){
		if(a[i]>=a[n]) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d ",a[0]);
	for(int i=1;i<n;i++){
		if(check(a,i)) printf("%d ",a[i]);
	}
	return 0;


}

