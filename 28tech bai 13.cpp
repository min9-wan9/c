#include<stdio.h>

int main()
{
	 int n;
	 scanf("%d",&n);
	 int nam=n/365;
	 int gan=n%365;
	 int tuan=gan/7;
	 int ngay=gan%7;
	 printf("%d %d %d",nam,tuan,ngay);
	 return 0;

}

