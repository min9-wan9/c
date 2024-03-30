#include<stdio.h>

int main()
{
float a,b,c;
puts("nhap cac gia tri a,b,c");
scanf("%f%f%f",&a,&b,&c);

if (b<0 ){
	printf("nhap lai gia tri b");
}
if (a<0 ){
	printf("nhap lai gia tri a");
}
if (c<0 ){
	printf("nhap lai gia tri c");
}
if((a+b)<c){
	printf("khong phai ba canh cua tam giac");

}
else if ((a-b)>c){
	printf("khong phai ba canh cua tam giac");
}
else{
	printf("la canh cua tam giac");
}



}

