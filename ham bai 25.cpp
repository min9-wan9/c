#include<stdio.h>

long long ucll(long long a, long long b){
	while(b){
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
} 
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b-1;i++){
		for(int j=i+1;j<=b;j++){
			if(ucll(i,j) ==1) {
				printf("(%d,%d)\n",i,j);
			}
		}
	}
	return 0;


}

