#include<stdio.h>
unsigned long long giaithua(int n){
	if (n==1 || n==0)// truong hop co co so
	return 1;
	else// truong hop de quy
	return n*giaithua(n-1);
}

int main()
{
	int i;
	for(i=0;i<21;i++){
		printf("%d!=%lld\n ",i,giaithua(i));
	}
return 0;

}

