#include<stdio.h>

int tn(int n){
	int lat=0,gan=n;
	while(n){
		lat=lat*10+n%10;
		n/=10;
	}
	return gan==lat;
}
int tongcs(int n){
	int sum=0,count=0;
	while(n){
		int gan=n%10;
		sum+=gan;
		if(gan==6) count++;
		n/=10;
		
	}
	if(count) {
		if(sum%10==8) return 1;
	}
	return 0;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(tongcs(i) && tn(i)) printf("%d ",i);
	}
	return 0;


}

