//wap input three valuesand findout minimum
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,min;
	clrscr();
	printf("enter three values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
	{
		printf("minimum value=%d",a);
	}
	else
		if(b<a&&b<c)
		{
			printf("minimum value=%d",b);
		}
		else
		{
			printf("minimum value=%d",c);
		}
	getch();
}





