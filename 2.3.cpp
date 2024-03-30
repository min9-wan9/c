#include<stdio.h>

int main()
{
	unsigned int i,n  ;
	printf("nhap so tu nhien n ");
	scanf("%d",&n);
	float sum = 0;
	for(i=1;i<=n; i++){
		sum += (float) 1/i;
	}
	printf("SUM = %f",sum);
	return 0;
	
	


}

