#include<stdio.h>
void nhap(int arr[], int n){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	nhap(arr,n);
	int count=0;
	
		for(int i=0;i<n;i+=2){
			if(arr[i]%2==0) {
				count++;
				printf("%d ",arr[i]);
			}
		}
	

	
	if(count==0) printf("NONE");
	return 0;

}

