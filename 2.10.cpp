#include<stdio.h>

int main()
{int a;
int i=2;
puts("nhap n>0");
scanf("%d",&a);
printf("%d=",a);
if (a>0){
	
	if (a==1){printf("2^0");
	}
	else {
		int count=0;
		while(a>1){
		if (a%i==0){
			count++;
			if (a==i){
				printf("%d^%d",i,count);
			}
		a=a/i;
		}
		
		else{
			if (count> 0){
			printf("%d^%d x",i,count);
			count=0;
			}
			i++;
			
			
		
			
		}
			
		}
		
		
	}
}
else {
	printf("nhap a>0");
}


}

