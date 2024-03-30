#include<stdio.h>

int main()
{
/* Các hàm trong thu vi?n math.h
• double sqrt( double x ): l?y can b?c 2 c?a s? không âm
x.
o Ví d?: sqrt(9) = 3.0;
• double cbrt( double x ): can b?c 3 c?a x.
o Ví d?: cbrt(27)= 3.0;
• double exp( double x ): e mu x. e= 2.718
• double log( double x ): logarit co s? e c?a x.
o Ví d? log( 2.718282 ) = 1.0
• double log10( double x ): logarit co s? 10 c?a x.
o Ví d?: log10(100) = 2.0;
• int abs( int x ): l?y giá tr? tuy?t d?i c?a s? nguyên x.
• double fabs( double x ): l?y giá tr? tuy?t d?i c?a x.
o Ví d?: fabs( -5.0 ) = 5.0;
• double ceil( double x ): làm tròn lên s? nguyên g?n nh?t
l?n hon ho?c b?ng x.
o Ví d?: ceil( 9.2 ) = 10.0;
• double round( double x ): làm tròn s?. Làm tròn lên ho?c
xu?ng tùy d? l?.
• double floor( double x ): làm tròn xu?ng s? nguyên g?n
nh?t nh? hon ho?c b?ng x.
o Ví d?: floor( 9.5 ) = 9.0;
• double pow( double x, double y ): x mu y.
o Ví d?: pow(2, 3) = 8;
• double fmod( double x, double y ): ph?n du chia x cho y.
o Ví d?: fmod( 12.55, 4 ) = 0.55;
• double sin( double x ): tính sin c?a x.
o Ví d?: sin( 90*1.0/180 ) = 1.0; x tính theo radian
• double cos( double x ): tính cos c?a x.
o Ví d?: cos ( 60*1.0/180 ) = 0.5; x tính theo radian
• double tan( double x ): tính tan c?a x.
o Ví d?: tan (45*1.0/180 ) = 1.0; x tính theo radian
• double asin( double x ): tính arc sin c?a x (? radian).
• double acos( double x ): tính arc cos c?a x (? radian).
Tri?u Thân Channel
2
• double atan( double x ): tính arc tan c?a x (? radian)
• Tham kh?o thêm:
https://en.wikipedia.org/wiki/C_mathematical_functions
/*
}

