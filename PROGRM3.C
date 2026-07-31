//wap which displays square and cube of one number

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\n enter value of a:");
	scanf("%d",&a);

	b=a*a;
	printf("\n square is %d",b);

	c=a*a*a;
	printf("\n cube is %d",c);

	getch();
}