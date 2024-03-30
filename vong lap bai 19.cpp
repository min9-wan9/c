#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	sum=(n/28) ;
	int gan=n/28;
	while(gan/3!=0){
		sum+=gan/3;
		gan= gan/3 +gan%3;
	}
	printf("%d",sum);
	return 0;

}

