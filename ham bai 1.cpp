#include<stdio.h>
#include<math.h>
int nguyenTo(int n){
	if(n==0 || n==1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(nguyenTo(n)) printf("YES");
	else printf("NO");
	return 0;

}

