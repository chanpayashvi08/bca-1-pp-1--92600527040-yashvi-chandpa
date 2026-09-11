//wap input price and quantity and total purchase is greater than dicount
#include<stdio.h>
#include<conio.h>
void main()
{
	float price,quantity,total,discount,payment;
	clrscr();
	printf("enter price :");
	scanf("%f",&price);
	printf("enter quantity :");
	scanf("%f",&quantity);
	total=price*quantity;
	if(total>1000)
	{
		discount=total*15/100;
	}
	else
	{
		discount=total*10/100;
	}
	payment=total-discount;
	printf("total=%2f",total);
	printf("\ndiscount=%2f",discount);
	printf("\n finalpayment=%2f",payment);
	getch();
}

