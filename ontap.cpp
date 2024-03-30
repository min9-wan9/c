#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int tn(int n){
	int lat=0,gan=n;
	while(n){
		lat=lat*10+n%10;
		n/=10;
	}
	return gan==lat;
}
int chinhphuong(int n){
	int gan=sqrt(n);
	return gan*gan==n;
}
int tongcs(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return nt(sum);
}

int main()
{
	int n;
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	int c1=0,c2=0,c3=0,c4=0;
	for(int i=0;i<n;i++){
		if(nt(a[i])) c1++;
		if(tn(a[i])) c2++;
		if(chinhphuong(a[i]) ) c3++;
		if(tongcs(a[i]) ) c4++;
	}
	printf("%d\n%d\n%d\n%d",c1,c2,c3,c4);
	return 0;
	
}

