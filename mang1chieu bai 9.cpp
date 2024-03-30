#include<stdio.h>
int check(int b[],int c[] ,int n, int k){
	for(int i=0;i<n;i++){
		if(b[i]==k) {
			c[i]++;
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		if(check(b,c,dem,a[i])){
			b[dem]=a[i];
			c[dem]=1;
			dem++;
		}
	}
	for(int i=0;i<dem;i++){
		printf("%d %d\n",b[i],c[i]);
	}
	return 0;
	

}

