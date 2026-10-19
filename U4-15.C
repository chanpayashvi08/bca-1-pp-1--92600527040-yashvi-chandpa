//wap armstromg number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,rem,sum,i;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	/*using while loop*/
	temp=n;
	sum=0;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(n==sum)
	{
		printf("\nwhile:armstrong number");
	}
	else
	{
		printf("\n while:not armstrong number");
	}
	/*using for loop*/
	temp=n;
	sum=0;
	for(;temp>0;temp=temp/10)
	{
		rem=temp%10;
		sum=sum+rem*rem*rem;
	}
	if(n==sum)
	{
		printf("\nfor:armstrong number");
	}
	else
	{
		printf("\nfor:not armstromg number");
	}
	getch();
}