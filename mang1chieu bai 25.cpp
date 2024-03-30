#include<stdio.h>

int main()
{
	int n=0,tmp;
	int a[10000];
	while(scanf("%d",&tmp) !=-1) // docj cac so trong luong input
	{
		a[n]=tmp;
		n++;
	}
	int chan=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) chan++;
	}
	if(chan>n-chan) printf("CHAN");
	else if(chan<n-chan) printf("LE");
	else printf("CHANLE");
	return 0;


}

