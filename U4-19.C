//wap factorial a given number
#include<stdio.h>
#include<conio.h>
void main()
{
	int  n,i;
	long int fact=1;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d",fact);
	getch();
}