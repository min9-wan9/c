#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int n){
	int gan=n%10;
	while(n){
		int r=n%10;
		if(r>gan) return 0;
		n/=10;
	
	}
	return 1;
}
int main()
{
	int n,count=0;
	scanf("%d",&n);
	if(n<2) return 0;
	for(int i=2;i<=n;i++){
		if(nt(i) && check(i)){
			printf("%d ",i);
			count++;
		}
	}
	printf("\n%d",count);
	return 0;


}

