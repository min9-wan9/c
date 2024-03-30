#include<stdio.h>

void change(int n) {
	n+=100;
	printf("%d\n",n);
}
int main()
{
	int a=200;
	change(a);
	printf("%d",a);
	return 0;
	/* khi goi ham change(a) thi tham so thuc so 
	  cua ham change la a=200, khi do gia tri nay 
	  duoc gan cho bien n la mot bien trong ham change,
	  2 bien nay hoan toan khac nhau va viec ban cho n+=100 se tang len 300,
	  nhung sau khi ham change thuc thi ban in gia tri a van la 200. day la truyen tham tri
	  Neu ban truyen tham tri thi gia tri cua tham so thuc su se KHONG BI THAY DOI sau khi ham ket thuc*/


}

