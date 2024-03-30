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
	while(gan){
		lat=lat*10+gan%10;
		gan/=10;
	}
	return lat==n;
}
int chinhPhuong(int n){
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
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s1=0,s2=0,s3=0,s4=0;
	for(int i=0;i<n;i++){
		if(nt(a[i])) s1++;
		if(tn(a[i]))s2++;
		if(chinhPhuong(a[i])) s3++;
		if(tongcs(a[i])) s4++;
	}
	printf("%d\n%d\n%d\n%d\n",s1,s2,s3,s4);
	return 0;


}

