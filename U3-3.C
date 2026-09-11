//wap input age from user and findout age is eligible or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("enter age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("person is not eligible for vote");
	}
	else
	{
		printf("person is eligible for vote");
	}
	getch();
}