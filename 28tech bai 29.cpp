#include<stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	float gan=b/a, gan1=c/b,gan2=d/c;
	if(gan==gan1 && gan1==gan2) printf("YES");
	else printf("NO");
	return 0;
	

}

