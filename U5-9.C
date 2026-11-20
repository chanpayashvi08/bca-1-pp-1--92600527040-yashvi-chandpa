//wap findout area of rectangle using udf
#include<stdio.h>
#include<conio.h>
int area(int l,int b)
{
	return l*b;
}
void main()
{
	int l,b,ans;
	clrscr();
	printf("enter length:");
	scanf("%d",&l);
	printf("enter breadth");
	scanf("%d",&b);
	ans=area(l,b);
	printf("area of rectangle=%d",ans);
	getch();
}