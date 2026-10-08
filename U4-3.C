//wap 1 3 5...n
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter N:");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		printf("%d ",i);
	}
	getch();
}