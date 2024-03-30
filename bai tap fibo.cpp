#include<stdio.h>
unsigned long long fibo(int n){
	if (n==1 || n==0)//dieu kien dung
	return n;
	else // dieu kien thuc hien de quy
	return (fibo(n-1)+fibo(n-2));
}

int main()
{
	int i;
	for(i=0;i<21;i++){
		printf("fibo(%d)=%lld\n",i,fibo(i));
	}
return 0;

}

