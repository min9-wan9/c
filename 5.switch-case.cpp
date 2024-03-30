#include<stdio.h>

int main()
{
char luaChon;
printf("Cau hoi: con cho co may chan");
printf("\nA.1 \nB.2 \nC.3 \nD.4");
printf("\n hon dap an cua ban");
luaChon = getchar();//nhap mot ki tu
switch(luaChon){
	case'a':
	case'A':
	case'b':
	case'B':
	case'c':
	case'C':{
		printf("\nRat tiec! Ban da chon sai");
	
		break;
	}
	case'd':
	case'D':{
		printf("Chinh xac! Xin chuc mung");
		break;
	}
	default :
	printf("\n Dap an khong phu hop");
	
}

return 0;

}

