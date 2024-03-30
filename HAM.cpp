#include<stdio.h>


int tong(int, int) ;//khai báo hàm

int max(int a, int b ){
	if(a>b) 
	return a;
	return b; 
	}// dinh nghia hàm 
}
//ham truyen bang tham chieu 
void swap (int*a,int*b ){
	int tmp=*a; // luu gia tri trong con tro a
	*a=*b; // gan gia tri chua trong con tro b cho a
	*b= tmp; //gan gia tri ban dau chua trong con tro a cho b
	 
} // khi ket thuc ham gia tri cua a,b con nhu cu khong.


//ham truyen bang gia tri
void swap (int a,int b ){
	int tmp= a; // luu gia tri trong con tro a
	a= b; // gan gia tri chua trong con tro b cho a
	b= tmp; //gan gia tri ban dau chua trong con tro a cho b
	
}

int main(){
	int a=200, b=600;
	
	printf("a=%d, b=%d",a,b)
}
