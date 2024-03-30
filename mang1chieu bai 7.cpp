#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int kc=1e9;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(abs(arr[j]-arr[i]) < kc) {
				kc=abs(arr[j]-arr[i]);
			}
		}
	}
	printf("%d",kc);
	return 0;

}

