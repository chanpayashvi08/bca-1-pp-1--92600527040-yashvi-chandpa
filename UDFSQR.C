//demo of UDF will calculate square and cube
#include<stdio.h>
#include<conio.h>
int square(int a); // function prototype
void main()
{
	int x,y;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&x);
	y=square(x); //funtion calling
	printf("\n square is %d",y);
	y=cube(x);
	printf("\n cube is %d",y);
	getch();
}
int cube(int a)
{
	int b;
	b=a*a*a;
	return(b);
}
int square(int a) // function header
{
	int b;     // function body
	b=a*a;
	return(b);
}
