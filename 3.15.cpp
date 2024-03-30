#include<stdio.h>

int main()
{
long long n=10000001,gan=n,du,somoi=0;
int sum=0,i,count=0;
for(n=10000001;n<100000000;n++){
	gan=n;
	while(gan!=0){
	du=gan%10;
	sum += du;
	
	if (du ==6){
		
		break;
	}
	somoi= somoi*10 +du;
	gan/=10;
	
	
		}
		for(i=2;i<sum;i++){
		if(sum % i ==0){
			count++;
		}
		}
	
if (somoi == n && count == 0 ){
	
		
			printf("%ld",n);
}
somoi=0;
	sum=0;	
	count=0;
	
	}
	
	



}



