#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 20 

int main()
{
	srand(time(NULL));
	int i;
	int arr[MAX];//dinh nghiax mang voi MAX phan tu
	
	//thuc hien gan gia tri cho cac phan tu mang
	for(i=0;i<MAX;i++){
		arr[i]= rand();//gan gia tri cua mang voi cac gia tri ngau nhien
	}
	
	// hien thi cac gia tri cua mang
	for(i=0;i<MAX;i++){
		printf("\n arr(%d)=%d",i,arr[i]);//hien thi cac gia tri cua mang
	}
return 0;
}

