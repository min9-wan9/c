#include<stdio.h>

int main()
{
	int h,m;
	scanf("%d%d",&h,&m);
	int phut;
	if(m==0) phut=(24-h)*60;
	else phut=(24-h)*60 -m;
	
	printf("%d",phut
	);
	return 0;


}

