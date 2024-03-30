#include<stdio.h>

int main()
{
	int n,a,b;
	int tien=0;
	scanf("%d%d%d",&n,&a,&b);
	if(b>=2*a) {
		tien=a*n;
		printf("%d\n",tien);
	}else {
		tien=(n/2)*b + (n%2)*a;
		printf("%d\n",tien);
	}
	return 0;
}

