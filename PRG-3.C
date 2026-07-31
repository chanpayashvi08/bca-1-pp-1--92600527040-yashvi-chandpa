//wap input uppercase letter and convert into lowercase
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter an uppercase letter:");
	scanf("%c",&ch);
	if(ch>'a'&&ch<='z');
	ch+=32;
	printf("lowercase:%c",ch);

	getch();
}
