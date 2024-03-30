#include<stdio.h>

int main()
{
	int  a1,a2,a3,b1,b2,b3,n;
	scanf("%d%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3,&n);
	int tong1=a1+a2+a3, tong2= b1+b2+b3, sum;
	if(tong1%5==0 && tong2%10==0) sum=tong1/5 +tong2/10;
	else if(tong1%5!=0 && tong2%10==0) sum=tong1/5 +tong2/10 +1;
	else if(tong1%5==0 && tong2%10!=0) sum=tong1/5 +tong2/10+1;
	else sum=tong1/5 +tong2/10 +2;
	if(sum<=n) printf("YES");
	else printf("NO");
	return 0;


}

