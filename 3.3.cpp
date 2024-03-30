#include<stdio.h>

int main()
{
int h;
puts("nhap h>0");
scanf("%d",&h);
if (h<=0){
	printf("vui long nhap h>0 !" );
}
else{
	int count=0,dem=0;
	int i;
	
	
	for (i=1;i<=h;i++){
		for(dem=0;dem<i;dem++){
			printf("*  ");
			
		}
	
			
	
			printf("\n");
		}
	}	
	
	
}


