#include<stdio.h>

int check(int b[],int n, int x){
	for(int i=0;i<n;i++){
		if(b[i]==x) return 0;
	}
	return 1;
}
void sapxep(int b[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(b[j]<b[i]){
				int tmp=b[j];
				b[j]=b[i];
				b[i]=tmp;
			}
		}
	}
}
void dem(int b[],int c[],int n, int k){
	for(int i=0;i<n;i++){
		if(b[i]==k){
			c[i]++;
		}
	}
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
		if(check(b,count,a[i])){
			b[count]=a[i];
			c[count++]=0;
		}
	}
	sapxep(b,count);
	for(int i=0;i<n;i++){
		dem(b,c,count,a[i]);
	}
	
	for(int i=0;i<count;i++){
		printf("%d %d\n",b[i],c[i]);
	}
	return 0;


}

