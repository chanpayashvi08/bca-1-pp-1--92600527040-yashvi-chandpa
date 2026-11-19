//wap right align
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,N;
	clrscr();
	printf("\n enter value of N:");
	scanf("%d",&N);
	for(i=-1;i<=N;i++)
	{
		for(k=1;k<=N-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
