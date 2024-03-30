#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int check=1;
		for(int j=0;j<i;j++){
			if(a[j]==a[i]){
				check=0;
			}
		}
		if(check){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(a[j]==a[i]) cnt++;
			}
			printf("%d %d\n",a[i],cnt);
		}
		
	}
	return 0;


}

