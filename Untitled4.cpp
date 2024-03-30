#include<iostream>
#include<math.h>
using namespace std;
int a[10000000];
void sang(){
    for(int i=0;i<=1000000;i++){
        a[i]=1;
    }
    a[0]=a[1]=0;
    for(int i=2;i<=sqrt(1000000);i++){
        for(int j=i*i;j<=1000000;j+=i){
            a[j]=0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=2;j<=b[i];j++){
            if(a[j]==1 &&a[b[i]-j]==1) cout<<j<<" "<<(b[i]-j)<<"\n";
        }
    }
    return 0;
}
