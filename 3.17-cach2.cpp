#include<stdio.h>
#include<stdbool.h>

bool soChan(int n){
	
	return n%2 ==0;
}
bool koTang(int n){
	int b,c=0;
	while (n>0){
		b=n%10;
		n/=10;
		if(c>b){
			return false;
		}
		else {
			c=b;;
		}
	}
	return true;
}

int soLe(int n){
	if(n%2!=0)
	return n;
}
bool koGiam(int n){
	int b,c=10;
	while(n>0){
		b=n%10;
		n/=10;
		if(c<b){
			return false;
		}else{
			c=b;
		}
	}
	return true;
}

bool phanC(int n){
	int c;
	int sumc=0,suml=0;
	while (n>0){
		c=n%10;
		n/=10;
		if (c%2 ==0){
			sumc+=c;
		}else{
			suml+=c;
		}
	}
	return sumc==suml;
}




int main()
{int i;
printf("\n cac so chan ko tang la: ");
printf("\n");
for(i=10000;i<=99999;i++){
	if (soChan(i) && koTang(i))
	{
		printf("%10d",i);
	}
}
printf("\n cac so le ko giam la: ");
printf("\n");
for (i=10000;i<=99999;i++){
	if (soLe(i) && koGiam(i)){
		printf("%10d",i);
	}
}

printf("\n cac chu so co tong so chan bang tong so le:");
printf("\n");
for(i=10000;i<=99999;i++){
	if (phanC(i)){
		printf("%10d",i);
	}
}

}

