#include<stdio.h>

int main()
{long long i,gan,du=gan%10,a;
int sumc=0,suml=0;
printf("cac so co tong chu so chan= tong chu so le:\n");
for(i=10001;i<100000;i++){
	gan=i;
	while (gan!=0){
		du=gan%10;
		if (du %2 == 0){
			sumc+=du;
		}else{
			suml+=du;
		}
		gan/=10;
	}
	if (sumc == suml){
		printf("%ld;",i);
		
	}
	sumc=0;
	suml=0;
}
printf("\n");
printf("cac so khong tang la:\n");
a=1;
for(i=10001;i<100000;i++){
	gan=i;
	a=gan%10;
	while (gan!=0){
		du=gan%10;
		gan/=10;
		if (a <= du){
			a=du;
			sumc++;
		}else{
			break;
		}


}
if (sumc ==4){
	printf("%ld;",i);

}
sumc=0;

}

}
