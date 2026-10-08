//wap menu
#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	float num1,num2,result;
	clrscr();
	printf("enter first number:");
	scanf("%f",&num1);
	printf("enter second number:");
	scanf("%f",&num2);
	printf("\n--------arithmetic operations-------\n");
	printf("1. addition\n");
	printf("2. subtraction\n");
	printf("3. multiplication\n");
	printf("4. division\n");

	printf("\n enter your choice(1-4)");
	scanf("%d",&choice);

	switch(choice)
	{
		case1:
			result=num1 + num2;
			printf("addition=%.2f",result);
			break;
		case2:
			result=num1 - num2;
			printf("subtraction=%.2f",result);
			break;
		case3:
			result=num1 * num2;
			printf("multiplication=%.2f",result);
			break;
		case4:
			if(num2 !=0)
			{
				result=num1 / num2;
				printf("addition=%.2f",result);
			}
			else
			{
				printf("division by zero is not possible");
			}
			break;
		default:
			printf("invalid choice");
	}
}

