#include<stdio.h>

int main()
{int a,b,tich;
puts("nhap a,b>0");
scanf("%d%d", &a, &b);
tich=a*b;
if (a>0 && b>0){
//	if (a=0 && b==0){
//		printf("khong co UCLN,BCNN");
//	}
//	if (a==0 || b==0){
//		printf("khong co UCLN,BCNN=0");
//	}
	while (a!=b){
		if (a>b){
			a=a-b;
		}
		else {
			b=b-a;
		}
	}
	printf("UCLN=%d\n",a);
	printf("BCNN=%d",tich/a);
}
else {
	printf("nhap a,b>0");
}

}

