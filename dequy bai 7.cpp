#include<stdio.h>

int tohop(int k, int n) {
	if (k==n || k==0 )return 1;
	else return tohop(k-1, n-1) + tohop(k,n-1); 
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k) ;
	printf("%d",tohop(k,n));
	return 0; 


}

