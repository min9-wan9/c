#include<stdio.h>

int main()
{
 int n;
puts("nhap n>0");
scanf("%d",&n);
if (n<=0){
	printf("vui long nhap n>0 !");
}
else{
	long long gan=n,i,count=0,a,b=10;
	int sodau;
	while (gan!=0){
		a=gan%10;
		if (a>b){
			count++;
		}
		b=a;
		gan/=10;
		if(gan ==0){
			sodau=a;
		}
	}
	if (count ==0 ){
		printf("cac so chu so xep theo thu tu tang dan\n");
	}else{
		printf("cac so chu so khong xep theo thu tu tang dan\n");
	}
	printf("chu so dau tien:%d\n",sodau);
	gan=n;
	count=0;
	while (gan!=0){
		a=gan%10;
		if (a== sodau){
		
		
			count++;
		}
		
		gan/=10;
		}
		printf("so lan=%d\n",count);

}
}

