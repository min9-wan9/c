#include<stdio.h>
#include<math.h>

int pt(int n, int k){
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
				count++;
			
				if(count==k) return i;
				
			}
		}
	}
	if(n>1) count++;
	if(count==k) return n;
	else return -1;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",pt(n,k));
	return 0;


}

