#include<stdio.h>

int dem[1000001];
int main()
{
	int n,max=-1e9;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		dem[a[i]]++;
		if(a[i]>max) max=a[i];
	}
	for(int i=0;i<n;i++){
		if(dem[a[i]] !=0){
			printf("%d %d\n",a[i],dem[a[i]]);
			dem[a[i]]=0;
		}
	}
	
	
	return 0;

}

