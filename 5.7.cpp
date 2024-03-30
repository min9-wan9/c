#include<stdio.h>
#include<string.h>
#include<ctype.h>
char iswhitepace(char x){
	return x==' '|| x=='\v';
}
void nhap(char c[100], int *start, int *end, int *count){
	fgets(c,99,stdin);
	int size=strlen(c);
	int i=0,j=0;
	start[i]=0;
	for(i=0;i<size-1;i++){
		if(iswhitepace(c[i])){
			end[j]=i-1;
			j++;
			start[j]=i+1;
		}
	}
	end[j]=size-2;
	*count=j;
}
int max(int *start, int *end, int count){
	int i,max,gan;
	max=end[0]-start[0]+1;
	for(i=1;i<=count;i++){
		gan=end[i]-start[i]+1;
		if(gan>max){
			max=gan;		}
	}
	return max;
	}
void hienThi(char *c, int *start, int *end,int count){
	int Max=max(start,end,count);
	int i,j;
	for(i=0;i<=count;i++){
		int gan= end[i]-start[i]+1;
		if(gan==Max){
			printf("vi tri bat dau:%d\n vi tri ket thuc:%d\n",start[i],end[i]);
			for(j=start[i];j<=end[i];j++){
				printf("%c",c[j]);
				
				}
				break;
			}
			
		}
	}

int main()
{int start[100];
int end[100];
char c[100];
int count;
nhap(c,start,end,&count);
hienThi(c,start,end,count);
return 0;

}

