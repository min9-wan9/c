#include<stdio.h> 

int main() {
	//khai b�o bien
	int number1;
	int number2;
	// nhap c�c bi�n 
	puts("Nhap so nguyent thu nhat");
	scanf("%d",&number1);
	
	puts("Nhap so nguyen thu hai");
	scanf("%d",&number2);

	//tinh toan
	int sum= number1 + number2;
	
	// hien thi 
	printf("%d + %d = %d",number1,number2,sum);
}
