#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c) && a+c>b && b+c>a){
		if(a==b && a==c) printf("1\n");
	    else if( (a==b && a!=c) || (a==c && a!=b) || (b==c && a!=b) ){
	    	printf("2\n");
		}else if((a*a +b*b==c*c)||(b*b+c*c==a*a) ||(a*a+c*c==b*b)){
			printf("3\n");
		}else printf("4\n");
	}else {
		printf ("INVALID\n");
	}
	return 0;

}

