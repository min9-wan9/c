#include<stdio.h>
int check(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x) return i;
	}
	return 0;
}
int main()
{
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=check(a,n,x);
	if(count==0) printf("NOT FOUND");
	else {
		for(int i=count;i<n-1;i++){
			a[i]=a[i+1];
		}
		for(int i=0;i<n-1;i++){
			printf("%d ",a[i]);
		}
	}
	return 0;
	

}

