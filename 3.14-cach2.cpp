#include<stdio.h>
#include<stdbool.h>
#include<math.h>
/*bool soNguyenTo(int);
bool chuSoNguyenTo(int);
bool tongNguyenTo(int);*/



bool soNguyenTo(int n){
	int i;
	if (n <2){
	return false;
	}
	
	for(i=2;i<=sqrt(n);i++){
		if (n%i ==0)
			return false;
		
	}
	return true;
}

bool chuSoNguyenTo(int n){
	int c;
	while(n>0){
		c=n%10;
		n/=10;
		if (! soNguyenTo(c)){
			return false;
		}
		
	}
	return true;
}

bool tongNguyenTo(int n){
	int sum=0;
	while (n>0){
		sum+=n%10;
		n/=10;
	}
	if (soNguyenTo(sum)){
			return true;
	}
	
	
	return false;

	
}

int main(){
int i;
for(i=22222222;i<=77777777;i++){
if (chuSoNguyenTo(i)  && tongNguyenTo(i) &&soNguyenTo(i)  )
{printf("%10d",i);
}
}
return 0;}

