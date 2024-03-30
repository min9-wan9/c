
#include<stdio.h>
#define LENGTH 5

int* nhap(){
static	int arr[LENGTH];
	static int i;
	for(i=0;i<LENGTH;i++){
		scanf("%d",&arr[i]);
	}
	return arr;
}
void hienthi( const int arr[]){
	int i;
	for(i=0;i<LENGTH;i++){
		printf("%5d",arr[i]);
	}
	printf("\n");
}



int main()
{int arr[LENGTH];
int *b;
b = nhap();
hienthi(b);


}

