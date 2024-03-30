#include<stdio.h>

int nhapn(){
	int n=0;
	while (n<=0){
		printf("nhap n>0: ");
		scanf("%d",&n);
	}
	return n;
}

int chuso(int n){
	int count=0;
	while (n>0){
		count++;
		n/=10;
	}
	return count;
}

int sole(int n){
	int count=0,i;
	while(n>0){
		i=n%10;
		if (i%2 !=0){
			count++;
		}
		n/=10;
	}
	return count;
}

int tong(int n){
	int sum=0;
	while (n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main()
{int n;
n=nhapn();
float tbc;
tbc=(float)tong(n)/chuso(n);
printf("\n so cac chu so la:%d",chuso(n));
printf("\n so cac so le la: %d",sole(n));
printf("\n tbc=%0.4f",tbc);


}

