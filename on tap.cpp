#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	for(int i=1;i<=a/2;i++){
		if(nt(i) && nt(a-i) )printf("%d %d\n",i,a-i);
	}
	return 0;


}

