#include<stdio.h>

int main()
{
	int n;
	int s[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		s[i]=a;
		
	}
	for(int i=0;i<n;i++){
		if(s[i] %2==0) printf("EVEN\n");
		else printf("ODD\n");
	}
	return 0;


}

