//wap check whether number is palindrome or not using udf
#include<stdio.h>
#include<conio.h>
int palindrome(int n)
{
	int r,rev=0,temp;
	temp=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(temp==rev)
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
	ans=palindrome(n);
	if(ans==1)
	{
		printf("number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
	getch();
}