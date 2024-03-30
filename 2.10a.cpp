#include<stdio.h>

int main()
{
int n ;
int i=2;
puts("nhap n>0");
scanf("%d",&n);
if (n>0 ){
	printf("%d=",n);
if (n==1){
	printf("1");
}
while (n>1){
	if (n%i==0){
		printf("%d",i);
		if (n!=i){
			printf("x");
		}
		n/=i;
		
		}
		else {
			i++;
		}
		
	}
}



	
	
	

else {
	printf("nhap n>0");
}


}

