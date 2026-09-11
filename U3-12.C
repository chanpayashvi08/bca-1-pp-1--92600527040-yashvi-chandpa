//wap find out character is in uppercase or lowercase
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter a character :");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("uppercase");
	}
	else
	{
		printf("lowercase");
	}
	getch();
}