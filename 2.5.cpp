#include<stdio.h>

int main()
{
	 int i,n,sum, giaithua;
	puts("nhap vao so tu nhien n");
	scanf("%d",&n);
	
if (n < 0){
	printf("nhap n >0");
	
}
else{
	sum=0, giaithua=1; 
	for (i=1;i<=n;i++){
		giaithua*=i;
		sum+=giaithua; 
	}
	printf("sum=%d",sum) ;
}
return 0; 

}

