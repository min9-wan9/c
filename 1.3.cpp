#include<stdio.h>

int main()
{
int a;
int b;

puts("nhap vao so nguyen a");
scanf("%d",&a);

puts( "nhap vao so nguyen b");
scanf("%d",&b);

int sum = a + b ;
printf("tong hai so la %d\n",sum);

int minus = a-b;
printf("hieu hai so la %d\n",minus);

int tich = a*b;
printf("tich cua hai so la %d\n",tich);

if (b== 0){
	printf("mau bang 0 , khong xac dinh");
}
else
{ int thuong = a/b ;
printf("thuong cua hai so la %d \n",thuong);
}







}

