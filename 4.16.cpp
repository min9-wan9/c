#include<stdio.h>
void nhap(int *arr,int *n ) {
	*n=0 ;
	while (*n<=0){
		printf("nhap n>0: ");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n;i++){
		printf("phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
}
void hienMang(int *arr, int n){
	int i;
	printf("\n mang goc: ");
	for(i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
void timViTri(int *arr, int n, int *start, int * end, int *count ){
	int j=0,i;
	 start[j]=0;
	for(i=0;i< n-1;i++){
		if (arr[i]>arr[i+1]){
			end[j]=i;
			j++;
			start[j]=i+1;
		}
	}
	end[j]=n-1;
	j++;
	*count=j;
}
int timMax(int *start, int *end, int count){
	int max= end[0]-start[0]+1;
	int i,length;
	for(i=1;i<count; i++){
		length=end[i]-start[i]+1;
		if (length>max){
			max= length;
		}
	}
	return max;
}
void hienThi(int *arr, int n, int k){
	int i;
	printf("\nvi tri bat dau la: %d  do dai:%d\n",n,k);
	for(i=n;i<n+k;i++){
		printf("%5d",arr[i]);
	}
	printf("\n");
}
void ketQua(int * arr,int *start, int *end, int n, int count ){
	if (count==n){
		printf("\nkhong co duong chay dai nhat!");
	}else{
		int i;
		int max=timMax(start, end , count);
		for(i=0;i<count; i++){
			int len = end[i]-start[i]+1;
			if (len == max){
				
				hienThi(arr,start[i],len);
			}
		}
	}
	
}

int main()
{int n,count=0;
int arr[100];
int start[100];
int end[100];

nhap(arr,&n);
hienMang(arr,n);


timViTri(arr,n,start, end ,&count);
ketQua(arr,start,end,n,count);
return 0;

}

