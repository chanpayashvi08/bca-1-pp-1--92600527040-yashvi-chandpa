//wap tp demonstrate use of macro
#include<stdio.h>
#include<conio.h>
#define SQUARE(X) (X*X)
void main()
{
	int n,ans;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	ans=SQUARE(n);
	printf("square=%d",ans);
	getch();
}