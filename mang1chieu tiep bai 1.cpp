#include<stdio.h>
#include<math.h>
int check(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
} 
int main()
{
	int t;
	scanf("%d",&t);
	int a[t];
	for(int i=0;i<t;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<t;i++){
		if(check(a[i])) printf("YES\n");
		else printf("NO\n");
	}
	return 0;


}

