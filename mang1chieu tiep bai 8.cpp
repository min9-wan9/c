#include<stdio.h>
int check(int a[], int n){
	int dem25=0, dem50=0;
	for(int i=0;i<n;i++){
		if(a[i] ==25) dem25++;
		else if(a[i]==50){
			dem25--;
			dem50++;
		}
		else {
			if(dem50!=0){
				dem50--;
				dem25--;
			}
			else dem25-=3;
		}
		if(dem25<0 || dem50<0) return 0;
	} 
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(check(a,n)){
		printf("YES");
	}
	else printf("NO");
	return 0;
	


}

