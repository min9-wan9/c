#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int countS1(char *s, char *s1);
void replace(char *s, char *s1, char *s2);


int countS1(char *s, char *s1){
	int i,count=0;
	for(i=0;s[i]!='\0';i++){
		if(strstr(&s[i],s1)==&s[i]){
			count ++;
		}
	}
	return count;
}

void replace(char *s, char *s1, char *s2){
	int occur=countS1(s,s1);// so lan xuat hien s1
	int len=strlen(s);
	int len1=strlen(s1);
	int len2=strlen(s2);
	int i=0,j=0;
	char *p=(char *)malloc(len+ occur*(len2-len1) +1);
	for(i=0;s[i] !='\0'; ){
		if(strstr(&s[i],s1)== &s[i]){
			strcpy(&p[j],s2);
			i+=len1;
			j+=len2;
		}else{
			 p[j++]=s[i++];
		}
	}
	p[j]='\0';
	puts(p);
}


int main()
{char s[1000];
char s1[1000];
char s2[1000];
fgets(s,999,stdin);
fgets(s1,999,stdin);
int len=strlen(s);
int len1=strlen(s1);
if(len>0){
	s[len-1]='\0';
}
if(len1>0){
	s1[len1-1]='\0';
}
fgets(s2,999,stdin);
int len2=strlen(s2);
if(len2>0){
	s2[len2-1]='\0';
}

replace(s,s1,s2);
return 0;


}

