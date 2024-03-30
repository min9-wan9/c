#include<stdio.h>

int main()
{
	int a;
	int b;
puts("nhap vao so nguyen a");
scanf("%d",&a);

puts("nhap vao so nguyen b");
scanf("%d",&b);

if (a >b){
	printf("so nguyen a lon hon so nguyen b");
}
else if ( a == b){
	printf ("so nguyen a bang so nguyen b");
}
else {
	printf("so nguyen a nho hon so nguyen b");
}

}

