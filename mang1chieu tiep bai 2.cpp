#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main()
{
	int t;
	scanf("%d",&t);
	int a[t];
	for(int i=0;i<t;i++){
		scanf("%d",&a[i]);
	} 
	for(int i=0;i<t;i++){
		for(int j=2;j<=a[i]/2;j++){
			if(nt(j) && nt(a[i]-j)) printf("%d %d\n",j,a[i]-j);
		}
	}
	return 0;

}

