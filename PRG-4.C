//wap input a number it is positive or negative
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	printf("\n enter any number");
	scanf("%d",&x);

	if(x>0)
	{
		printf("\n positive number");
	}
	else
	{
		printf("\n negative number");
	}
	getch();
}

