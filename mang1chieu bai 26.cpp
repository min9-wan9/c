#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0;
	for(int i=0;i<n;i++){
		int gan=1;
		for(int j=0;j<i;j++){
			if(a[j]==a[i]){
				gan=0;
				break;
			}
		}
		if(gan) count++;
	}
	printf("%d",count);
	return 0;


}

