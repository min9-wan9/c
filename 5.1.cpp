#include<stdio.h>
#include<string.h>
const char s[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K'
,'L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z','W'};
int main()
{int n,k;
k=1;
scanf("%d",&n);
while(k<2|| k>36){
	printf("nhap co so:");
	scanf("%d",&k);
}
char arr[100];
int i=0;
while(n!=0){
	int gan=n%k;
	n/=k;
	arr[i]=s[gan];
	i++;
}
arr[i]='\0';
strrev(arr);
puts(arr);
return 0;
}

