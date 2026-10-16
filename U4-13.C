//wap input number and findout reverse of that number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,rev=0,digit,i;
	clrscr();
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	for(i=1;temp>0;i++)
	{
		digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	printf("\n reverse using for loop=%d",rev);
	temp=n;
	rev=0;
	while(temp>0)
	{
		digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	printf("\n reverse using while loop=%d",rev);
	getch();
}

