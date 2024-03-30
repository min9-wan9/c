#include<stdio.h>
#include<string.h>
#include<ctype.h>
int viTri(char *c, int count){
	int i,dem=0;
	for(i=0;i<strlen(c);i++){
		if(isblank(c[i])){
			dem++;
		}
		if(dem== count){
			return i;
		}
	}
}  
void ketQua(char *c){
	int i,j,count=0;
	int len=strlen(c);
	for(i=0;i<len;i++){
		if(isblank(c[i]) ){
			count++;
		}
	}
	int dai=0;
	for(j=count;j>=0;j--){
		int gan=viTri(c,j);
		for(i=gan;i<len-dai-1;i++){
			printf("%c",c[i]);
		}
		printf(" ");
		dai=len-gan-1;
	}
}
int main()
{char c[1000];
fgets(c,999,stdin);
ketQua(c);
return 0;

}

