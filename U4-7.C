//wap multiplication table of inputted number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter any number");
	scanf("%d",&n);
	printf("\n using for loop\n");
	for(i=1;i<=10;i++)
	{
		printf(" %d  x  %d  =%d  \n",n,i,n*i);
	}
	printf("\n using while loop\n");
	i=1;
	while(i<=10)
	{
		printf(" %d  x  %d  =%d  \n",n,i,n*i);
		i++;
	}
	getch();
}
