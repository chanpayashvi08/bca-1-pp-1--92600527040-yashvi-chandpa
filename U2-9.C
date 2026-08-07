//wap interchange two number without using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("before swapping:a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("after swapping:a=%d,b=%d\n",a,b);

	getch();
}