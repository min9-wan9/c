#include<stdio.h>
void drawHeart (int m, int n){
	int i,j;
	for (i=1;i<=6;i++){
		for(j=1;j<=7 ;j++){
			if (!(i==1 && j==1)){
				printf(" * ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
}
int main()
{
	int m,n;
	drawHeart(m,n);
	return 0;


}

