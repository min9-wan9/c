#include<stdio.h>

int main()
{
int m,n;
puts ("nhap so duong m,n");
scanf("%d%d",&m,&n);
if (m>0 && n>0){
	int i=1;
	int count=0;
	while (count<=m){
	
		printf("%d  ",i);
		
		if (i==n ){
			count++;
			i=0;
			printf("\n");
		}
		i++;
		
		
	
	}
	
}else{
	printf("vui long nhap m,n>0 !");
}

}

