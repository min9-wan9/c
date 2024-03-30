#include<stdio.h>

int main()
{long long i=10000001,a=2,sum=0;
int dem=0;
for (i=10000001;i<100000000;i++){
	for( a=2;a<i;a++){
		if (i%a ==0){
			sum++;
		}
		if (sum == 0 ){
			long long gan=i,du,tong=0,j,k=0;
			while (gan !=0){
				du= gan%10;
				gan/=10;
				if (du <2){
					
					break;
				}else{
				for(j=2;j<du;j++){
					if (du%j == 0){
						k++;
					}
					
				}
				if (k == 0){
					tong+=du;
					
				}else{
					
					break;
				}
				}
				
				
			}
			
			for(j=2;j<tong;j++){
				if (tong%j ==0){
					dem++;
				}
				
				
			}
			if (dem==0){
				printf("%ld;",i);
		
		
			
		}else{
			dem=0;
		}
			}
			else{
			sum=0;
		}
		
	}
}


}

