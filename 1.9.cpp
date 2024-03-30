#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,delta;
	puts("nhap cac gia tri cua ax^2 +bx +c =0");
	scanf("%f%f%f",&a,&b,&c);
	if (a==0){
		if (b==0 & c!=0){
			printf("phuong trinh vo nghiem");
		}
		else if (c==0 &b==0){
			printf("phuong tirnh vo so nghiem");
		}
		else {
		printf("nghiem cua phuong trinh la %f",-c/b);
	}}
	else {
		delta= b*b -4*a*c;
		if (delta<0){
			printf("\nphuong trinh vo nghiem");
		}
		else if (delta ==0){
			printf("\nphuong trinh co nghiem kep la %f",-b/2*a);
		}
		else {
			float x1,x2;
			x1= (-b-sqrt(delta))/2*a;
			x2= (-b+sqrt(delta))/2*a;
			printf("\nnghiem thu nhat cua phuong trinh la %f",x1);
			printf("\n nghiem thu hai cua phuong trinh la %f",x2);
			
		}
		
	}
	


}

