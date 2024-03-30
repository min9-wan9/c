#include<stdio.h>
#include<math.h>
int main()
{
	int d1,d2,d3;
	scanf("%d%d%d",&d1,&d2,&d3);
	long long t1= d1*2 +d2*2;
	long long t2=d1+d2+d3;
	long long t3=d1*2+d3*2;
	long long t4=d2*2+d3*2;
	
	long long min=fmin(fmin(t1,t2),fmin(t3,t4));
	printf("%lld",min);
	return 0;


}

