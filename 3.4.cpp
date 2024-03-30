#include<stdio.h>
#include<math.h>

int main()
{
	int h;
	puts("nhap h>0");
	scanf("%d",&h);
	if (h<0){
		printf("vui long nhap h>0 !");
	}else{
		int i,j=1;
		
		for (i=1;i<=h;i++){
			for(j=1;j<2*h;j++){
				if (abs(h-j) <=(i-1)){
					printf(" * ");
				}else{
					printf("   ");
				}
				
			}
			
				printf("\n");
			
		}
	}
	


}

