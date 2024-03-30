#include<stdio.h>

int main()
{int a,b;
scanf("%d%d",&a,&b);
long long tong=a+b;
long long hieu=a-b;
float thuong=1.0*a/b;
long long tich= 1ll*a*b;

printf("%lld\n",tong);
printf("%lld\n",hieu);
printf("%lld\n",tich);
if(b){
	printf("%.4f\n",thuong);
}else {
	printf("INVALID\n");
}

return 0;


}

