#include<stdio.h>
// int :-2ti - 2ti

// khai bao kieu float so thuc
//dieu kien : khai bao thuong kieu float
//c1: tac dong ca 2 bien a,b deu la float hoac 1 trong 2 la float
//c2: thuong=1.0 *a/b ( khai bao cho la a la kieu float)
int main()
{
	int a=300,b=200;
//	float thuong=(float )a/b;// tam khai a kieu float
	float thuong=1.0*a/b;
	printf("%.2f", thuong);
	return 0;

// phep toan se uu tien trong ngoac truoc
}
/*
int a=10000000, b=1000000;
long long tich=(long long)a*b / long long tich= 1ll*a*b
*/
