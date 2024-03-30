#include<stdio.h>

int main()
{
	int a=100,c=250;
	int* ptr =&a;
	
	float b=3.14l;
	float* fprt=&b;
	printf("\n dia chi cua bien a:%x",&a);
	printf("\n dia chi cua bien ptr:%x",ptr);
	printf("\n gia tri cua bien a:%d",*ptr);
	ptr=&c;
	printf("\ngia tri cua c:%d",*ptr);


}

