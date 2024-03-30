#include<stdio.h>

int main()
{
unsigned int i,n;
int sum, sumc , suml;
printf("nhap vao so tu nhien n");
scanf("%d",&n);
if (n<0 ){
	printf("nhap lai so n >0");
}
else {
	sum= n*(n+1)/2;
	printf("\nsum = %d",sum);
	sumc=0;
	suml=0;
	for (i=1;i<=n;i++){
		if (i%2 ==0){
			sumc+=i;
			
		}
		else{
			suml+=i;
			
			
		}
	}printf("\nsumc=%d",sumc);
	printf("\nsuml=%d",suml);
}
return 0;


 

}

