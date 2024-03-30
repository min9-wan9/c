#include<stdio.h>
#include<math.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	int gan=sqrt(n);
	
	if(1ll*gan*gan==n) printf("YES");
	else printf("NO");
	return 0;


}

