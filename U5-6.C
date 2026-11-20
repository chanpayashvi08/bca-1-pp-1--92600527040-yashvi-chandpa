//wap to findout whether a number is armstrong or not using udf
#include<stdio.h>
#include<conio.h>
int armstrong(int n)
{
	int r,sum=0,temp;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
		return 1;
	else
		return 0;
}
void main()
{
	int n,ans;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	ans=armstrong(n);
	if(ans==1)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("numberi s not armstrong");
	}
	getch();
}