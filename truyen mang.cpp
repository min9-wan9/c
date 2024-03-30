#include<stdio.h>

#define LENGTH 10
// truyen mang va tra ve tu mang
void nhap(const int arr[]){
	int i;
	for(i=0;i<LENGTH;i++){
		scanf(" %d ",&arr[i]);
	}
}

void hienThi(int arr[]){
	int i;
	for(i=0;i<LENGTH;i++){
		printf(" %d ",arr[i]);
	}
}
int main()
{int i;
int arr[LENGTH];
/*printf("%x\n",&i);//dia chi cua bien i
printf("%x\n",arr);
printf("%x\n",&arr);
printf("%x\n",&arr[0]);
printf("%x\n",i);// gia tri hien thoi cua i
*/
nhap(arr);
hienThi(arr);
}

