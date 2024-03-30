#include<stdio.h>
#include<string.h>

void hienThi(char s[100][20], int size);
void tachTu(char *s);

void tachTu(char *s){
	int i=0;
	char res[100][20];
	char *delim=" ,.\t\n";
	char *p;
	for(p=strtok(s,delim); p!=NULL; p=strtok(NULL,delim)){
		strcpy(res[i++],p);
	}
	
	hienThi(res,i);
}

void hienThi(char s[100][20], int size){
	int i;
	for(i=size-1;i>=0;i--){
		printf("%s ",s[i]);
	}
}
int main()
{
	char s[1000];
	fgets(s,999,stdin);
	tachTu(s);
	return 0;


}

