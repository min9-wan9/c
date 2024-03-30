#include<stdio.h>

int main()
{
	/*
	** cau lenh lua chon long nhau
	** vong lap long nhau
	** vong lap ket hop cau lenh lua chon 
	** lenh break ; continue
	*/
	//vong lap lua chon long nhau
	int i,j, count = 0;
	i = 100;j=200;
	if(i>0){
		if (j>0)
		printf("\ni,j cung >0");
			} 
	
	 
	//vong lap long
	 
	
	for(i = 0; i<3 ; i++){
		for(j = 0;j<3 ;  j++){
			printf("%5d",count++); 
		}
		printf("\n\n"); 
	}
	
	// vong lap ket hop,break,continue
	for (i=0; i<= 100; i++){
		if (i%5 ==4)
		break;
	}
	printf("\ni= %d",i);
	return 0;


}

