//wap to find fibonacci series up to user input using udf
#include<stdio.h>
#include<conio.h>
void fibonacci(int n)
{
	int a=0,b=1,c,i;

	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
void main()
{
	int n;
	clrscr();
	printf("enter limit:");
	scanf("%d",&n);
	fibonacci(n);
	getch();
}