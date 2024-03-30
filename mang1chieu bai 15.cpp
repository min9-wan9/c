#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=-1e9,max2=-1e9;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max2=max;
			max=a[i];
		}
		else if(a[i]>max2) max2=a[i];
	}
	printf("%d %d",max,max2);
	return 0;
	


}

