#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int count=0;
	int gan=n%100;
	int gan2=gan%20;
	int gan3=gan2%10;
	int gan4=gan3%5;
	count=n/100 +gan/20 +gan2/10+gan3/5+gan4;
	printf("%d",count);
	return 0;


}

