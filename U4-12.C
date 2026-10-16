//wap input number and findout sum of digit
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,sum=0,digit,i;
	clrscr();
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	for(i=1;temp>0;i++)
	{
		digit=temp%10;
		sum=sum+digit;
		temp=temp/10;
	}
	printf("\nsum using for loop=%d",sum);
	temp=n;
	sum=0;
	while(temp>0)
	{
		digit=temp%10;
		sum=sum+digit;
		temp=temp/10;
	}
	printf("\nsum using while loop=%d",sum);
	getch();
}

