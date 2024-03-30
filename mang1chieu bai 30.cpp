#include<stdio.h>

int check(int b[],int c[], int n,int k){
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
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=0;
	for(int i=0;i<n;i++){
		if(check(b,c,count,a[i])){
			b[count]=a[i];
			c[count++]=1;
		}
	}
	int max=-1e9,gan;
	for(int i=0;i<count;i++){
		if(c[i]>max) {
			max=c[i];
			gan=i;
		}
	}
	printf("%d %d",b[gan],c[gan]);
	return 0;
	
	


}

