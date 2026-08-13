//wap which display maximum number out of 3 numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	 int x,y,z;
	 clrscr();
	 printf("\n enter value of x,y,z");
	 scanf("%d%d%d",&x,&y,&z);
	 if(x>y)
	 {
		printf("\n x number is the largest:");
	 }
	 else
	 {
	       //	printf("\n y number is largest:");
	 }
		if(y>z)
		{
			printf("\n y number is largest:");
		}
		else
		{
			printf("\n z number is largest:");
		}

	 getch();
}


