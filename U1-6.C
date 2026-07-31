//wap to inerchange two numbers using 3rd variabke
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("\n enter value of x :");
	scanf("%d",&x);
	printf("\n enter value of y :");
	scanf("%d",&y);
	printf("\n before interchange : x=%d,y=%d",x,y);
	z=x;
	x=y;
	y=z;
	printf("\n after interchange : x=%d y=%d",x,y);
	getch();
}