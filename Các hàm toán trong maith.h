#include<stdio.h>

int main()
{
/* C�c h�m trong thu vi?n math.h
� double sqrt( double x ): l?y can b?c 2 c?a s? kh�ng �m
x.
o V� d?: sqrt(9) = 3.0;
� double cbrt( double x ): can b?c 3 c?a x.
o V� d?: cbrt(27)= 3.0;
� double exp( double x ): e mu x. e= 2.718
� double log( double x ): logarit co s? e c?a x.
o V� d? log( 2.718282 ) = 1.0
� double log10( double x ): logarit co s? 10 c?a x.
o V� d?: log10(100) = 2.0;
� int abs( int x ): l?y gi� tr? tuy?t d?i c?a s? nguy�n x.
� double fabs( double x ): l?y gi� tr? tuy?t d?i c?a x.
o V� d?: fabs( -5.0 ) = 5.0;
� double ceil( double x ): l�m tr�n l�n s? nguy�n g?n nh?t
l?n hon ho?c b?ng x.
o V� d?: ceil( 9.2 ) = 10.0;
� double round( double x ): l�m tr�n s?. L�m tr�n l�n ho?c
xu?ng t�y d? l?.
� double floor( double x ): l�m tr�n xu?ng s? nguy�n g?n
nh?t nh? hon ho?c b?ng x.
o V� d?: floor( 9.5 ) = 9.0;
� double pow( double x, double y ): x mu y.
o V� d?: pow(2, 3) = 8;
� double fmod( double x, double y ): ph?n du chia x cho y.
o V� d?: fmod( 12.55, 4 ) = 0.55;
� double sin( double x ): t�nh sin c?a x.
o V� d?: sin( 90*1.0/180 ) = 1.0; x t�nh theo radian
� double cos( double x ): t�nh cos c?a x.
o V� d?: cos ( 60*1.0/180 ) = 0.5; x t�nh theo radian
� double tan( double x ): t�nh tan c?a x.
o V� d?: tan (45*1.0/180 ) = 1.0; x t�nh theo radian
� double asin( double x ): t�nh arc sin c?a x (? radian).
� double acos( double x ): t�nh arc cos c?a x (? radian).
Tri?u Th�n Channel
2
� double atan( double x ): t�nh arc tan c?a x (? radian)
� Tham kh?o th�m:
https://en.wikipedia.org/wiki/C_mathematical_functions
/*
}

