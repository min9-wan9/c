#include<stdio.h>

int main()
{
int a,b;
puts ("nhap a,b>0");
scanf("%d%d",&a,&b);
int n,sum,sum1;
int i;
sum=0;
sum1=0;
if(a>0 &b>0){
for (i=2;i<a;i++){
	if (a % i==0){
		sum=1;
		
		break;
	}}
	for (n=2;n<b;n++){
	if (b%n==0){
		sum1=1;
		
		break;
	}
}
	if (sum==0 &sum1==0){
		printf("ca hai so deu la so nguyen to");
	}
	else {
		printf ("hai so khong cung la so nguyen to");
	}

}
else {
	printf("nhap a,b>0");
}


}

