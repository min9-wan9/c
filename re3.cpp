#include<stdio.h>

int main()
{int h;
puts("nhap h>0:");
scanf("%d",&h);
if(h<=0){
	printf("vui long nhap h>0!");
}else{
	int i,j;
	for(i=1;i<=h;i++){
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");
	}
}
return 0;

}

