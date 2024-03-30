#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n<0) return 0;
	if(n==1 || n==0) return 0;
	
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(nt(arr[i])){
			sum+=arr[i];
			count++;
		}
	}
	
	
	double tbc=(double)sum/count;
	printf("%.3lf",tbc);
	return 0;
	


}

