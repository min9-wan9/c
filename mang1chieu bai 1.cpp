#include<stdio.h>
int tongc(int arr[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0) sum+=arr[i];
	}
	return sum;
}
int tongl(int arr[], int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(arr[i] %2!=0) sum+=arr[i];
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],countc=0,countl=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i] %2==0) countc++;
		else countl++;
	}
	printf("%d\n%d\n%d\n%d",countc, countl,tongc(arr,n), tongl(arr,n));
	return 0;	


}

