#include<stdio.h>

int main()
{
	char c;
	scanf("%c",&c);
	if(c<='z' && c>='a'){
		c-=32;
		printf("%c",c);
	}
	else if(c<='Z'  && c>= 'A'){
		c+=32;
		printf("%c",c);
	}
	else printf("%c",c);
	return 0;

}

