//wap find out prime number user to series
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	/*using while loop*/
	i=2;
	flag=0;
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(n<=1)
	{
		printf("\nwhile:not prime");
	}
	else
	{
		printf("\nwhile:prime");
	}
	/*using for loop*/
	flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(n<=1)
	{
		printf("\nfor:not prime");
	}
	else
	{
		printf("\nfor:prime");
	}
	getch();
}




