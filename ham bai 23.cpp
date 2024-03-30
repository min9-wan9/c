#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int i, int n){
	if(nt(i) && nt(n-i)) return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int gan;
		scanf("%d",&gan);
		for(int i=2;i<=gan/2;i++){
			if(check(i,gan)) printf("%d %d\n",i,gan-i);
		}
	}
	return 0;
	


}

