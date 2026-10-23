//wap armstrong numbers up to user series
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,temp,rem,sum;
	clrscr();
	printf("enter the limit");
	scanf("%d",&n);
	printf("armstrongs numbers are:\n");
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+rem*rem*rem;
			temp=temp/10;
		}
		if(sum==1)
		{
			printf(" %d ",i);
		}
	}
	getch();
}
