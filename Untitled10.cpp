#include<stdio.h>
#include<math.h>

int p[1000001];
void sang(){
    for(int i=1;i<=1000000;i++){
        p[i]=i;
    }
    for(int i=2;i<=sqrt(1000000);i++){
        if(p[i]==i){
            for(int j=i*i;j<=1000000;j+=i){
            if(p[j]==j){
                p[j]=i;
            }
        }
        }
        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    sang();
    for(int i=1;i<=n;i++){
        printf("%d\n",p[i]);
    }
    return 0;


}

