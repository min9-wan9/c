#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr="     1.43245234well done";
	char *p;
	double d;
	d=strtod(ptr,&p);// chuyen tu gia tri xau sang doublr

    printf("gia tri double sau khi chuyen doi= %lf",d);
    printf("\nPhan con lai cua xau khong the chuyen doi: %s",p);
    return 0;
}

