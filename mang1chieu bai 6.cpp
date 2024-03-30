#include<stdio.h>

int main()
{
	int n,k,count=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] + arr[j]==k) count++;
		}
	}
	printf("%d",count);
	return 0;

}

