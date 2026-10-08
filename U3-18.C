//wap posotive negative or zero
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("enter number");
	scanf("%d",&n);
	if(n>0)
	{
		printf("number is positive");
	}
	else
		if(n<0)
		{
			printf("number is negative");
		}
		else
		{
			printf("number is zero");
		}
	getch();
}
