#include<stdio.h>
#include<math.h>

int main()
{
	double a,x;
	puts("nhap so thuc x,a"); 
	scanf("%lf %lf",&x,&a); 
	int k=0;
	 
	double xmuk=1;
	long long giaithua=1;
	double tam=xmuk/giaithua;
	double kq=0;
	
	
	while (tam>=a){
		
		xmuk*=x;
		k++;
		giaithua*=k;
		tam+=xmuk/giaithua;
		
	}
	printf("e^%0.2lf=%0.2lf",x,tam);
	return 0;
		
	
}

