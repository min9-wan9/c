#include<stdio.h>

int main()
{
int n;
puts("nhap n>0");
scanf("%d",&n);
if (n<=0){
	printf ("vui long nhap n>0 !");
}else{
	int gan=n,a,chuso=0,sole=0,sum=0;
	while (gan!=0){
		a=gan%10;
		sum+=a;
		if (a%2 !=0){
			sole++;
		}
		gan/=10;
		chuso++;
	}
	printf("so cac chu so la:%d\n",chuso);
	printf("so cac so le la :%d\n",sole);
	
	 double tbc = (double) sum/chuso;
	printf("tbc=%0.9lf",tbc);
}

}

