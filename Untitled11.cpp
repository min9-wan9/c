#include<iostream>
#include<math.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i==0){
			cout<<a[i+1]-a[i]<<" "<<a[n-1]-a[i]<<endl;
		}
		else if(i==n-1) cout<<a[i]-a[i-1]<<" "<<a[i]-a[0]<<endl;
		else cout<<fmin(a[i+1]-a[i], a[i]-a[i-1])<<" "<<fmax(a[i]-a[0], a[n-1]-a[i])<<endl;
	}
	return 0;
	
}
