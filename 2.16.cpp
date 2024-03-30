#include<stdio.h>
#include<math.h>

int main()
{
	int a,b;
	puts ("nhap a,b>0");
	scanf("%d%d",&a,&b);
	int i,m;
	if (a>0 && b>0){
		printf("cac so chinh phuong la:");
		if (a>b){
			for(i=2;i<=sqrt(a);i++){
				m=i*i;
				if (m<=a &&m>=b){
					printf("%d;",m);
				}
			}}
			else {
			for(i=2;i<=sqrt(b);i++){
				m=i*i;
				if (m<=b &&m>=a){
					printf("%d;",m);
				}	
			}
		}
	}
	else {
		printf("nhap a,b>0");
	}


}

