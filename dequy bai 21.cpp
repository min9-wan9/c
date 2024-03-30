#include<stdio.h>
int check(int arr[], int n,int i){
	if((n-1-i)<=i) return 1;
	if(arr[n-1-i] !=arr[i]) return 0;
	else {
		check(arr,n,i+1);
	}
	
}
int main()
{
	int n,i=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	if(check(arr,n,i)) printf("YES\n");
	else printf("NO\n");
	return 0;

}

