//wap find maximum of three values
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter three values :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("maximum = %d",a);
	}
	else
		if(b>a&&b>c)
		{
			printf("maximum = %d",b);
		}
		else
		{
			printf("maximum = %d",c);
		}
	getch();
}