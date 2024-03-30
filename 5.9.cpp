#include<stdio.h>
#include<string.h>
#include<ctype.h>
int chuSo(char *c){
	int i,sum=0;
    int len=strlen(c);
    for(i=0;i<len;i++){
    	if(isdigit(c[i])){
    		sum++;
		}
	}
	return sum;
}
int chuCai(char *c){
	int i,sum=0;
	int len=strlen(c);
	for(i=0;i<len;i++){
		if(isalpha(c[i])){
			sum++;
		}
	}
	return sum;
}
int nguyenAm(char *c){
	int i,sum=0;
	int len=strlen(c);
	for(i=0;i<len;i++){
		if( c[i]=='u'|| c[i]== 'e' || c[i]=='o'|| c[i]=='a'|| c[i]=='i'
		||c[i]=='U' || c[i]=='E' || c[i]== 'O' || c[i]=='A'|| c[i]=='I'){
			sum++;
		}
	}
	return sum;
}

int main()
{char c[1000];
fgets(c,999,stdin);
int so=chuSo(c);
int chucai=chuCai(c);
int nguyenam=nguyenAm(c);
int len=strlen(c);
int khac=len-so-chucai-1;
printf("chu so:%d\n",so);
printf("ki tu nguyen am:%d\n",nguyenam);
printf("ki tu phu am: %d\n",chucai-nguyenam);
printf("ki tu khac:%d",khac);
return 0;

}

