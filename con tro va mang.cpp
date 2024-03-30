#include<stdio.h>

int main()
{
int arr[]={1,2,3,4};
int *ptr=arr;

printf("\n dia chi cua mang:%x ",arr);
printf("\n dia chi cua phan tu dau tien:%x ",&arr[0]);
printf("\n dia chi cua con tro:%x ",ptr);
int i;
for(i=0;i<4;i++){
	printf("%5d",arr[i]);
}
printf("\n");
/*for(i=0;i<4;i++){
	
	printf("%5d",*(ptr+i));
}
*/
for(;ptr<=&arr[3];ptr++){
	printf("%5d",*ptr);
}
}

