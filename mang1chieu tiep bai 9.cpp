#include<stdio.h>
#include<math.h>

int min(int a[], int n, int x){
	int min=1e9;
	for(int i=0;i<n;i++){
		int gan=abs(a[i]-x);
		if(a[i]==x){
			gan=1e9;
		}
	
		
		if(gan<min) min=gan;
	}
	return min;
}
int max(int a[], int n, int x){
	int max=0;
	for(int i=0;i<n;i++){
		int gan=abs(a[i]-x);
		if(gan>=max) max=gan;
	}
	return max;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d %d\n",min(a,n,a[i]), max(a,n,a[i]));
	}
	return 0;


}

