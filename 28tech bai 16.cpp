 #include<stdio.h>

int main()
{char c;
scanf("%c",&c);
if(c=='z' || c=='Z') printf("a");
else if (c>='a' && c<'z') {
	c+=1;
	printf("%c",c);
}
else if(c>='A' && c<'Z'){
	c+=33;
	printf("%c",c);
}
return 0;
}



