#include<stdio.h>
#include<math.h>
int pt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int count=0;
			while(n%i==0){
				count++;
				n/=i;
				if(count==2) return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(pt(i)) printf("%d ",i);
		
	}
	return 0;


}

