//wap input value and findout the number is even and odd
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	getch();
}