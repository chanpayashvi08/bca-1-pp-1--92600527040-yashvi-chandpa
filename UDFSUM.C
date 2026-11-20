//demo of UDF which will calculate sum of two numbers
#include<stdio.h>
#include<conio.h>
int mul(int p,int q);
int sum(int a,int b); //(1)function prototype OR function declaration
int minus(int p,int q);
void main()
{
	int x=2,y=5,z;
	clrscr();
	z=sum(x,y);//(2)function calling statement with arguments
	printf("\nanswer is : %d",z);
	z=minus(x,y);
	printf("\n answer is : %d",z);
	z=mul(x,y);
	printf("\n answer is :  %d",z);
	getch();
}
int sum(int a,int b) //(3)function header/signature with parameters
{
	int c;
	c=a+b; //(4)function body
	return(c);
}
int minus(int p,int q)
{
	int r;
	r=p-q;
	return(r);
}
int mul(int p,int q)
{
	int r;
	r=p*q;
	return(r);
}