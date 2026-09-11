//wap enter 2 numbers and findout the number is equal or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter two numbers :");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("numbers are equal");
	}
	else
	{
		printf("numbers are not equal");
	}
	getch();
}