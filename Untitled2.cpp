#include<iostream>

using namespace std;
int check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>2;
}
int main()
{
	int n;
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++){
		cin<<b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=2;j<=b[i];j++){
			if(check(j) && check(b[i]-j)) cout<<j<<" "<<b[i]-j<<"\n";
		}
	}
	return 0;


}

