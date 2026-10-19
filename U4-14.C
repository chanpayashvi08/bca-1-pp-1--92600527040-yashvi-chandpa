//wap number palindrome
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,rem,rev;
	int i;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	/*using while loop*/
	temp=n;
	rev=0;
	while(temp>0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(n==rev)
	{
		printf("\nwhile: palindrome");
	}
	else
	{
		printf("\n while: not palindrome");
	}
	/*using for loop*/
	temp=n;
	rev=0;
	for(;temp>0;temp=temp/10)
	{
		rem=temp%10;
		rev=rev*10+rem;
	}
	if(n==rev)
	{
		printf("\nfor:palindrome");
	}
	else
	{
		printf("\nfor:not palindrome");
	}
	getch();
}

