//wap findout area of circle using udf
#include<stdio.h>
#include<conio.h>
float area(float r)
{
	return 3.14*r*r;
}
void main()
{
	float r,ans;
	clrscr();
	printf("enter radius:");
	scanf("%f",&r);
	ans=area(r);
	printf("area of circle=%f",ans);
	getch();
}
