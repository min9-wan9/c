#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuHoa(char *c){
	int i;
	int size=strlen(c);
	int count=0;
	for(i=0;i<size-1;i++){
		if(isupper(c[i])){
			count ++;
		}
	}
	printf("so chu hoa la: %d",count);
}
void chuThuong(char *c){
	int i,count=0;
	int size=strlen(c);
	for(i=0;i<size-1;i++){
		if(islower(c[i])){
			count++;
		}
	}
	printf("\nso chu thuong la:%d\n",count);
}
void chuCai(char *c){
	int i,count =0;
	int size=strlen(c);
	for(i=0;i<size-1;i++){
		if (isalpha(c[i])){
			count ++;
		}
	}
	printf("\n so chu cai la: %d",count);
}
int main()
{char str[100];
fgets(str,99,stdin);
chuHoa(str);
chuThuong(str);
chuCai(str);
return 0;

}

