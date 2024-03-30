#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	puts("nhap so nguyen a");
	scanf("%d",&a);
	
	puts("nhap so nguyen b");
	scanf("%d",&b);
	
	puts("nhap so nguyen c");
	scanf("%d",&c);
	
	puts("nhap so nguyen d");
	scanf("%d",&d);
	
	if (a == b && a ==c && a ==d ){
		printf("khong co gia tri lon nhat");
	}
    if (a>b && a>c && a>d){
    	int max =a;
    	printf("max la %d\n",max);
    	
	}
	
	if (b>a && b>c && b>d){
		int max = b;
		printf("max la %d ", max);
	}
	if (c>a && c>b && c>d){
		int max = c;
		printf("max la %d",max);
	}
	if (d>a && d>b && d>c){
		int max =d;
		printf("max la %d",max);
		
	}
}

