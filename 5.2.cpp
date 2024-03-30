#include<stdio.h>
#include<string.h>
char whitespace(char x){
	return (x== ' '|| x=='\t');
}
int main()
{
char arr[1000];
int i,count=0;
fgets(arr,999,stdin);
int size=strlen(arr);
for(i=0;i<size-1;i++){
	if((!whitespace(arr[i]) && whitespace(arr[i+1]) ) || (!whitespace(arr[i]) && !whitespace(arr[i+1]) && i+1==size-1)){
		count++;
	}
}
printf("so tu: %d",count);


}

