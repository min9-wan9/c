#include<stdio.h>

int main()
{int n,i,sum;
sum=0;
puts ("nhap n");
scanf("%d",&n) ;
for (i=2;i<n;i++)
{
if (n %i == 0){
	printf("n khong phai so nguyen to");
	sum+=i;
}
}
if (sum==0){
	printf("n la so nguyen to");
}



}

