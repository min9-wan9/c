#include<stdio.h>

int main()
{
	int a,b,n;
	scanf("%d%d%d",&a,&b,&n);
	int i=1,count=0;
	while (i*a<=n){
		if((n-i*a) %b==0){
			printf("YES");
			count++;
			break;
		}
		else i++;
	}
	if(count==0 ) printf("NO");
	return 0;
	


}

