#include<stdio.h>
long long fibo(int n){
if (n==0 || n==1)
return n;
else
return (fibo(n-1) +fibo(n-2));
}


int main()
{
	int n,t=0,i=2;
	puts("nhap n>0");
	scanf("%d",&n);
	if (n>0){
		int sum=0,a;
		printf("%d so nguyen to dau tien la:\n",n);
		while(t<n){
		for(a=2;a<i;a++){
			if (i%a ==0){
				sum++;
			}
		}
		if (sum == 0){
			printf("%d",i);
			t++;
			if (t!=n){
				printf(";");
			}
			else{printf("\n");
			}
		}else{
			sum=0;
		}
		i++;
		}
		int tich,so=0;
		i=2;
		printf("%d so chinh phuong dau tien la:\n",n);
		while (so<n){
			tich= i*i;
			so++;
			printf("%d;",tich);
			i++;
			if (so == n){
				printf("\n");
			}
		}
		for (i=0;i<n;i++){
			printf("fibo(%d)=%ld\n",i,fibo(i));
		}
		
		}
		
	else
	{printf("vui long nhap n>0");
	}
	
	

}

