#include<stdio.h>
/* ki tu la cac ki tu nhu: c, ,' , 1 ,3 ,4 
 xau ki tu la chuoi cac ki tu
 moi xau ket thuc bang NULL nen can co n+1 phan tu*/
int main()
{char c =getchar();
//scanf("%c",&c);- cach 2 nhap ki tu 
printf("%d",c);//ma ASCII cua c
printf("\n%c\n",c);
char str[13];//="hello worl!";
fflush(stdin);
gets(str); // nhap cac ki tu vao xau
printf("%s",str);
}

