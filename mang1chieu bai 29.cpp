#include<stdio.h>

int check(int b[],int c[],int n,int x){
	for(int i=0;i<n;i++){
		if(b[i]==x) {
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
			c[count]=1;
			count++;
		}
	}// dem so lan cua moi phan tu
	
	int max=-1e9;
	for(int i=0;i<count;i++){// tim so luong lon nhat
		if(c[i]>max) max=c[i];
	}
	
	int d[n],k=0;
	for(int i=0;i<count;i++){
		if(c[i]==max){
			d[k++]=b[i];
		}
	}
	int gan=1e9;
	for(int i=0;i<k;i++){
		if(d[i]<gan) gan=d[i];
	}
	printf("%d %d",gan,max);
	return 0;
	

}

