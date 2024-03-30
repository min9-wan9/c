#include<stdio.h>
#include<math.h>

int pt(int n){
	int sum;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
			}
			sum=i;
		}
	}
	if(n!=1) sum=n;
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int gan;
		scanf("%d",&gan);
		printf("%d\n",pt(gan));
	}

	return 0;
}

