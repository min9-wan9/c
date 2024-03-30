#include<stdio.h>
#define PI 3.14
#define FOR(i,a,b) for(int i=a; i<b;i++)
#define FORd(i,a,b) for(int i=(a);i>=(b);i--)

typedef long long ll;
int main()
{
	int i;
	FOR(i,1,10) printf("%d ",i);
	printf("\n");
	FORd(i,10,1) printf("%d ",i);
	return 0;


}

