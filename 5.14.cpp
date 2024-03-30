#include<stdio.h>
#include<string.h>
#include<stdlib.h>



void doaction(char *s1, int pos, int len){
	int size=strlen(s1);
	int i;
	for(i=pos;i<=size-len;i++){
		s1[i]=s1[i+len];
	}
	
}

void replace(char *s1, char *s2){
	int len1=strlen(s1);
	int len2=strlen(s2);

	int i=0,j=0,k;
	for(i=0;s1[i]!= '\0';i++){
		if (strstr(&s1[i], s2)== &s1[i]){
		doaction(s1,i,len2);
		i--;
		}
	}

}
int main()
{char s1[1000];
char s2[1000];
fgets(s1,999,stdin);
fgets(s2,999,stdin);
int len1=strlen(s1);
int len2=strlen(s2);
s1[len1-1]='\0';
s2[len2-1]='\0';

replace(s1,s2);
puts(s1);
return 0;

}

