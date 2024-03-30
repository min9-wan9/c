#include<stdio.h>

int main()
{long n,i;
puts("nhap so duong n");
scanf("%ld",&n);
long so=0;
long m;
m=n;
while (m>0){
	i=m%10;
	so+=i;
	m=m/10;
}
printf("tong cac chu so la: %ld",so);


}

