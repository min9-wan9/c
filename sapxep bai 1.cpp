#include<stdio.h>
int check(int dem[], int x, int n){
	for(int i=0;i<n;i++){
		if(dem[i]==x) return 0;
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
	int dem[n],j=0;
	for(int i=0;i<n;i++){
		if(check(dem,a[i],j)){
			dem[j]=a[i];
			j++;
		}
	}
	printf("%d",j);
	return 0;
	


}

