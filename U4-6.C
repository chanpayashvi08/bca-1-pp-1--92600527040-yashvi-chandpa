//wap print 1 10 2 9 3 8...10 1
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("using for loop\n");
	for(i=1;i<=10;i++)
	{
		printf(" %d %d ",i,11-i);
	}
	printf("\nusing while loop\n");
	i=1;
	while(i<=10)
	{
		printf(" %d %d ",i,11-i);
		i++;
	}
	getch();
}