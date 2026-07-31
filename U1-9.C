//wap which number findout is odd or even
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,r;
	clrscr();
	printf("\n enter any number");
	scanf("%d",&x);
	r= x % 2;

	if(r==0)
	{
		printf("\n even number");
	}
	else
	{
		printf("\n odd number");
	}
	printf("\n value of r : %d",r);
	getch();
}

