#include<stdio.h>

int max(int a[],int n){
	int Max=-1e9;
	for(int i=0;i<n;i++){
		if(a[i]>Max) Max=a[i];
	}
	return Max;
}
int min(int a[],int n){
	int Min=1e9;
	for(int i=0;i<n;i++){
		if(a[i]<Min) Min=a[i];
	}
	return Min;
}
int  posmax(int a[],int n,int max){
	for(int i=0;i<n;i++){
		if(max==a[i])
		return i;
	}
}
int posmin(int a[],int n,int min){
	int pos;
	for(int i=0;i<n;i++){
		if(min==a[i]) pos=i;
	}
	return pos;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int Max=max(a,n);
	int Min=min(a,n);
	
	printf("%d %d",posmin(a,n,Min),posmax(a,n,Max));
	return 0;

}

