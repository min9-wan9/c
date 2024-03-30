#include<stdio.h>

int main()
{
	int n;
puts("nhap so nguyen n");
scanf("%d",&n);
if (n>0){
	printf ("%d la so duong\n", n);
	
}
 else if (n == 0){
	printf("%d khong la duong va khong la so am\n",n);
}
 
else {
	printf("% la so am\n",n);
}



if( n % 2 ==0){
	printf("%d la so chan \n",n);
}
else {
printf("%d la so le\n",n);
}
return 0;
}
