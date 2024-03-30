#include<stdio.h>


int main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n--){
		int a;
		scanf("%d",&a);
		if(a%2==1) count++;
	}
	if(count==0) printf("YES");
	else printf("NO");
	return 0;


}

