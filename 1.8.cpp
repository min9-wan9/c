#include<stdio.h>

int main()
{
float a,b;
puts("nhap so a va b");
scanf(" %f  %f",&a,&b);
if (a==0){
	printf("phuong trinh khong xac dinh");
}
else {
	float x = -(b/a);
	printf("nghiem cua phuong trinh la %f",x);
}

}

