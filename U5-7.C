//wap to find whethrt a nmuber is prime or not using udf
#include<stdio.h>
#include<conio.h>
int prime(int n)
{
	int i;
	if(n<=1)
		return 0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void main()
{
	int n,ans;
	clrscr();
	printf("enter any number");
	scanf("%d",&n);
	ans=prime(n);
	if(ans==1)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
	getch();
}