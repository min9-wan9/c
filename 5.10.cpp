#include<stdio.h>
#include<string.h>
void nhap(int *n){
	*n=0;
	while(*n<=0){
		printf("\nnhap n>0: ");
		scanf("%d",n);
	}

}
void doi(int count, int du){
	char s[100];
	if(count==0 && du==1){
		s[count]='I';
	}else if(count ==0 && du==2){
		s[count]='II';
	}else if(count==0 && du==3){
		s[count]='III';
	}
	else if(count==0 && du==4){
		s[count]='IV';
	}
	else if(count==0 && du==5){
		s[count]='V';
	}
	else if(count==0 && du==6){
		s[count]='VI';
	}
	else if(count==0 && du==7){
		s[count]='VII';
	}
	else if(count==0 && du==8){
		s[count]='VIII';
	}
	else if(count==0 && du==9){
		s[count]='IX';
	}
	else if(count==1 && du==1){
		s[count]='X';
	}
	else if(count==1 && du==2){
		s[count]='XX';
	}
	else if(count==1 && du==3){
		s[count]='X';
	}
	else if(count==1 && du==4){
		s[count]='XL';
	}
	else if(count==1 && du==5){
		s[count]='L';
	}
	else if(count==1 && du==6){
		s[count]='LX';
	}
	else if(count==1 && du==7){
		s[count]='LXX';
	}
	else if(count==1 && du==8){
		s[count]='LXXX';
	}
	else if(count==1 && du==9){
		s[count]='XC';
	}

}
void chuyenDoi(int n){
	int count=-1;
	while(n>0){
		int du=n%10;
		n/=10;
		
		if(du!=0){
			count++;
		doi(count,du);
		}
		
	}
}
void ketQua(char *s, int n){
	chuyenDoi(n);
strrev(s);
int i;
int len=strlen(s);
for(i=0;i<len;i++){
	printf("%c",s[i]);
}
}

int main()
{
char c[100];
fgets(c,99,stdin);
int len=strlen(c);
int i,
sum=0;
for(i=0;i<len-1;i++){
	if(c[i]=='I' && c[i+1]=='V'){
		sum+=4;
		i++;
	}else if(c[i]=='I' && c[i+1]=='X'){
		sum+=9;
		i++;
	}
	else if(c[i]=='C'){
		sum+=100;
	}else if(c[i]=='L'){
		sum+=50;
	}else if(c[i]=='X'){
		sum+=10;
	}else if(c[i]=='V'){
		sum+=5;
	}else if(c[i]=='I'){
		sum+=1;
	}
}
printf("gia tri bang:%d",sum);\
int n;
char s[100];
 nhap(&n);
ketQua(s,n);
return 0;
}

