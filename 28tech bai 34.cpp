#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	int tong=a+b+c+d+e;
	if(tong%5==0) {
		int res=tong/5;
		if(res!=0) printf("%d",res);
		else printf("-1");
	}
	
	else printf("-1");
	return 0;


}

