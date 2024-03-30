#include<stdio.h>

int main()
{unsigned int n,i,s;
puts ("nhap so tu nhien n");
scanf("%d",&n);
s=0;
for (i=1;i<=n;i++){
	if (n % i== 0){
		printf("\n%d",i);
		s+=1;
	}
	
}
printf("\nso cac uoc la %d",s);
	return 0;

}

