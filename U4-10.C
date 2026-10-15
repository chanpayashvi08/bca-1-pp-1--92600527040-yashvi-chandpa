//wap accept 10 numbers and display total
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\nusing for loop\n");
	sum=0;
	for(i=1;i<=10;i++)
	{
		printf("enter number:");
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("total=%d\n",sum);
	printf("\n using whi;e loop\n");
	sum=0;
	i=1;
	while(i<=10)
	{
		printf("enter number:");
		scanf("%d",&n);
		sum=sum+n;
		i++;
	}
	printf("total=%d",sum);
	getch();
}


