#include<stdio.h>
#include<ctype.h>
int main()
{
char c='*';

if(ispunct(c)){
	printf("%c la chu cai, chu so hoac khoang trong",c);
}else{
	printf("%c ko la chu cai, chu so hoac khoang trong",c);
}
return 0;
}

