#include<stdio.h>
#include<math.h>
int tongchuSo(int ); 
int nguyenTo(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int ptnt(int n){
	int gan=n,sum=0;
	for(int i=2;i<=sqrt(gan);i++){
		if(n%i==0){
			while(n%i==0){
				int b=tongchuSo(i);
				sum+=b;
				n/=i;
			}
		}
	}
	if(n!=1) {
		int b=tongchuSo(n);
		sum+=b;
	}
	return sum;
}
int tongchuSo(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	int sum1=tongchuSo(n), sum=ptnt(n);
	int a=nguyenTo(n);
	if(a==0 && sum1==sum) printf("YES");
	else printf("NO");
	return 0; 

}

