#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
bool capitalizeSigal(char c){
	return c=='.' || c=='?' || c=='!';
}
bool iswhitepace(char c){
	
	return c==' '||c== '\t' || c=='\n';
}
bool specialCharacter(char c){
	return c==',' || c=='.' || c=='?'
	||c=='!' || c==';' || c==':'|| c==')' || c=='(';
}
void removeFirst(char *c){
	
	int i,dem=0;
	int len=strlen(c);
	for(i=0;i<len-1;i++){
		if(iswhitepace(c[i])){
			dem++;
		}else{
			break;
		}
	}
		for(i=0;i<len-dem;i++){
		c[i]=c[i+dem];
	}
	
}
void removeLast (char *c){
	int i,j;
	int len=strlen(c);
	for(i=len-1;i>=0;i--){
		if(iswhitepace(c[i])){
			c[i]='\0';
		}
		else{
			break;
		}
	}
} 
void removeMid(char *c){
	int i,j;
	int len=strlen(c);
	for(i=0;i<len;i++){
		if(iswhitepace(c[i]) && iswhitepace(c[i+1])){
			for(j=i+1;j<len;j++){
				c[j]=c[j+1];
			}
			i--;
			len--;
}else if(iswhitepace(c[i] )&& specialCharacter(c[i+1])){
			for(j=i;j<len;j++){
				c[j]=c[j+1];
			}
			i--;
			len--;
		}else if(c[i]== '\t'){
			c[i]=' ';
		}
		}
			
		}

int countPos(char *c){
	int i;
	int count=0;
	int len=strlen(c);
	for(i=0;i<len;i++){
		if(specialCharacter(c[i]) && ! specialCharacter(c[i+1])
		&& !iswhitepace(c[i+1]) ) {
			count ++;
		}
	}
	return count;
}
void addWhitepace(char *c, char *res, int amount){
	int i,j=0;
	
	int len=strlen(c);
	for(i=0;i<len;i++){
		res[j++]=c[i];
		if(specialCharacter(c[i]) && !specialCharacter(c[i+1])  && !iswhitepace(c[i+1])){
			res[j++]= ' ';
		}
	}
	res[len+ amount]= '\0';
}
void capitalize(char *p){
	int i=0;
	int len=strlen(p);
	if(len > 0){
		p[i]=toupper(p[i]);
	}
	for(i=0;i<len;i++){
		if(capitalizeSigal(p[i]) ){
			p[i+2]= toupper(p[i+2]);
		}
	}
}
int main()
{char c[1000];
fgets(c,999,stdin);

removeLast(c);
removeFirst(c);
removeMid(c);
int len=strlen(c);
int num=countPos(c);

char *p= (char *) malloc (num + len + 1);
addWhitepace(c,p,num);
capitalize(p);
printf("%s",p);
}

