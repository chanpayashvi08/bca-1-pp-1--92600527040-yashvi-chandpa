//wap fibonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=0,b=1,c;
	clrscr();
	printf("enter number of terms");
	scanf("%d",&n);
	printf("\n using for loop\n");
	a=0;
	b=1;
	for(i=1;i<=n;i++)
	{
		printf(" %d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n using while loop\n");
	a=0;
	b=1;
	i=1;
	while(i<=n)
	{
		printf(" %d ",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	getch();
}
