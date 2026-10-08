//wap print first 10 natural numbers with their square and cube
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("\nnumber=%d",i);
		printf("\nsquare=%d",i*i);
		printf("\ncube=%d",i*i*i);
	}
	getch();
}