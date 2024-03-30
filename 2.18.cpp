#include<stdio.h>
#include<math.h>

int main()
{
	 double n; 
	scanf("%lf",&n);
	
    int k=0;
    float res=0 ;
    double  t=1.0/(2*k+1);
    int sigal =-1; 
     
    while (t>=n){
    	t=1.0/(2*k+1);
    	res+= 1*sigal *-1*t;
    	  
    sigal*=-1; 
    	k++;
    	
	}
double sum = 4*res; 
	printf("PI=%0.8lf",sum);


}

