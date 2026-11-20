//wap fins out reverse of number using UDF
#include<stdio.h>
#include<conio.h>
void reverse();
void main()
{
	clrscr();
	reverse();
	getch();
}
void reverse()
{
	int rev=0,rem,n;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("revrse=%d",rev);
}