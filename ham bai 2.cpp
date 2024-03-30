#include<stdio.h>
#include<math.h>
//int check(long long n){
//	int count=0,i=2;
//	
//		while(n>1){
//		if(n%i==0){
//			count++;
//			n/=i;
//		}
//		else {
//			i++;
//		}
//	}
//	return count;
//	
//	
//}
int check(long long n){
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int dem=0;
			while(n%i==0){
				dem++;
				n/=i;
				if(dem>1) return 0;
			}
			count++;
		}
	}
	if(n!=1) count++;
	return count;
}
int main()
{
	long long n;
	scanf("%lld",&n);
	int gan=check(n);
	if(gan==3) printf("1");
	else printf("0");
	return 0;

}

