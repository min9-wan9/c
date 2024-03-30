#include<stdio.h>
#include<stdbool.h>


 
bool thuanNghih(int n){
	int somoi=0;
	int gan=n;
	while (n>0){
		
		
		
		somoi= somoi*10 + n%10;
		n/=10;
	}
	return somoi == gan;
}

bool sumNguyenTo(int n){
	int sum=0,i=2;
	int count=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	
	
	
	return sum%6 ==0;
}
bool koCo6(int n){
	int c;
	while (n>0){
		c=n%10;
		if (c == 6){
			return false;
		}
		n/=10;
	}
	return true;
}


int main()
{
	int i;
	for (i=10000000;i<=99999999;i++){
		if (thuanNghih(i) && koCo6(i) && sumNguyenTo(i)){
			printf("%10d",i);
		}
	}


}

