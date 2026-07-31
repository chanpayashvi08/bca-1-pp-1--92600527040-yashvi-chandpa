//wap take 3 values for principle amount rate of interset and number of year

#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d;
	clrscr();
	printf("\n enter the principle ammount :");
	scanf("%f",&a);
	printf("enter the rate of interset:");
	scanf("%f",&b);
	printf("enter the number of years:");
	scanf("%f",&c);
	d=a*b*c/100;
	printf("\n*************************************");
	printf("\n principle ammount :%.2f",a);
	printf("\n rate of interest :%.2f",b);
	printf("\n numbers of years :%.2f",c);
	printf("\n*************************************");

	printf("\n simple interset is %f",d);

	getch();
}


