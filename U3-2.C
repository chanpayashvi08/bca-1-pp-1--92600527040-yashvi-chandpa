//wap that input 2 values from user and find out minimum
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n enter value of a,b");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("\n a number is minimum");
	}
	else
	{
		printf("\n b number is minimum");
	}
	getch();
}