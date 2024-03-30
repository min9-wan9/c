#include<stdio.h>
#include<math.h>



int reverse(int n){
	int sum=0;
	int gan=n;
	while(n){
		sum= sum*10 +n%10;
		n/=10;
	}
	return sum== gan;
	
}
int uoc(int n){
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
			}
			count++;
		}
	}
	if(n!=1) count++;
	return count;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int count=0;
	for(int i=a;i<=b;i++){
		
		if(reverse(i)  ){
			int tam=uoc(i);
			if(tam>=3){
				count++;
			printf("%d ",i);
			} 
			
		}
	}
	if(count==0) printf("-1");
	return 0;
		

}

