#include<stdio.h>
#include<string.h>
#include<ctype.h>
void upper(char *c){
	int i,size= strlen(c);
	for(i=0;i<size-1;i++){
		c[i]=toupper(c[i]);
	}
	printf("xau chu hoa la:%s",c);
}
void lower(char *c){
	int i,size=strlen(c);
	for(i=0;i<size-1;i++){
		c[i]=tolower(c[i]);
	}
	printf("\n xau chu thuong la:%s",c);
}
int main()
{
char str[100];
fgets(str,99,stdin);

upper(str);

lower(str);
return 0;
}

