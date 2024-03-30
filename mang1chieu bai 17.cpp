#include<stdio.h>

int check(int a[],int n){
	int j=n-1;
	for(int i=0;i<n;i++){
		if(j>=i) {
			if(a[j] !=a[i]) return 0;
			j--;
		}
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(check(a,n)) printf("YES");
	else printf("NO");
	return 0;
	


}

