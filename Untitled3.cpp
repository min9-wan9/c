#include<iostream>
#include<math.h>
using namespace std;
int a[1000001];
void sang(int a[]){
	for(int i=0;i<1000000;i++){
		a[i]=1;
	}
	a[0]=a[1]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		for(int j=i*i;j<=1000000;j+=i){
			a[j]=0;
		}
	}
} 
int main()
{
	int n;
	cin>>n;
	sang(a);
	int b[n];
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		if(a[b[i]]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;


}

