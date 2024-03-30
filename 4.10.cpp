#include<stdio.h>
void nhap(int *arr, int *n){
	while(*n<=0){
		printf("nhap n>0: ");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void hienThi(int *arr, int n){
	int i,j;
	for(i=0;i<n;i++){
		int count=0;
		for(j=i-1;j >= 0;j--){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count==0){
			printf("%5d",arr[i]);
		}
		
			
		}
	}

int main()
{int n=0;
int arr[100];
nhap(arr,&n);
hienThi(arr,n);
return 0;


}

