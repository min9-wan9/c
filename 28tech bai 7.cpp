#include<stdio.h>

int main()
{int a,b;
scanf("%d%d",&a,&b);
int c;//so lon nhat <=a chia het cho b
long long d;
if(a>b){
	int j=1;
	c=j*b;
	int tmp=2;
	while(tmp*b<=a){
		c=tmp*b;
		tmp++;
	}
	int i=2;
	d=b*i;
	while(d< a){
		i++;
		d=b*i;
	}
	
}else{
	c=0;
	d=b;
}
	printf("%d\n",c);
	printf("%lld\n",d);
return 0;

}

