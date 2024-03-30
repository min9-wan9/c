#include<stdio.h>

int main()
{
	int n,count=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int tam;
		scanf("%d",&tam);
		if(tam==2022) count ++;
	}
	if(count!=0) printf("YES");
	else printf("NO");
	return 0;


}

