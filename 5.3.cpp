#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isRerver(char *c){
	char gan[100];
	strcpy(gan,c);
	strrev(gan);
	return strcmp(c,gan)==0;
}
int main()
{long i;
char x[10];

for(i=100000000;i<=999999999;i++){
	ltoa(i,x,10);
	if(isRerver(x)){
		printf("%10d",i);
	}
}
return 0;
}

