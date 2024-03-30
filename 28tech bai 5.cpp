#include<stdio.h>
#include<math.h>

int main()
{int x1,y1,x2,y2;
scanf("%d%d%d%d",&x1, &y1,&x2,&y2);
long long res;
res=(long long)(x2-x1)*(x2-x1) + (long long)(y2-y1)*(y2-y1);
double kq=sqrt(res);
printf("%.2lf",kq);
return 0;


}

