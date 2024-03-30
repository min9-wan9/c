#include<stdio.h>

int main()
{ 
int i,n;
puts("nhap gia tri so nguyen n > 0 ");
scanf("%d",&n);
printf("cac so chan\n");
for (i=0; i < n ; )
{printf("%d\n",i);

	i= i+2;
	
}
printf("cac so le\n");
for (i=1; i < n ; )
{
	
	printf("%d\n",i);
	i=i+2;
	
}
return 0;


}

