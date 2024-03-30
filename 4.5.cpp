#include<stdio.h>
#include<math.h>
void nhap(int *arr, int *n){
	while(*n<=0){
		printf("nhap n>0:  ");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
int  timKiem(int *arr, int k, int n){
	int i,gan=abs(arr[0]-k),b=arr[0];
	for(i=1;i<n;i++){
		if(abs(arr[i]-k)<gan){
			gan=abs(arr[i]-k);
			b=arr[i];
		}
	}
	return b;
}

int main()
{int n=0,k;
int arr[100];
nhap(arr,&n);

printf("nhap k: ");
scanf("%d",&k);

timKiem(arr,k,n);
printf("so gan %d:%d",k,timKiem(arr,k,n));
return 0;
}

