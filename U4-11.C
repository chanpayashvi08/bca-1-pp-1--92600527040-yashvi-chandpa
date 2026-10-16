//wap calculate power value
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,i,power=1;
	clrscr();
	printf("enter base value:");
	scanf("%d",&x);
	printf("enter power value:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		power=power*x;
	}
	printf("\npower using for loop=%d",power);
	power=1;
	i=1;
	while(i<=y)
	{
		power=power*x;
		i++;
	}
	printf("\n power using while loop=%d",power);
	getch();
}
