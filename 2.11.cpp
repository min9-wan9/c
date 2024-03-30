#include<stdio.h>

int main()
{
	int n,i,count,a;
	 count=0;
	 a=2;

	puts ("nhap so nguyen duong n");
	scanf("%d",&n);
	while(1){
		int mark=1;
		for(i=2;i<a;i++){
			if (a%i==0){
				mark=0;
				break;
				
				
			}
			
		}
		if (mark==1){
		count++;
				printf("%d;",a);
		}
				
			
						if (count>=n){
				break;
			}
			a++;
		}
		
	


}

