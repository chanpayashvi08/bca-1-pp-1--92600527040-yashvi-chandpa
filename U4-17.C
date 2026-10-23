//wap prime numbers up to series
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,flag;
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("prime numbers are:\n");
	for(i=2;i<=n;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf(" %d ",i);
		}
	}
	getch();
}