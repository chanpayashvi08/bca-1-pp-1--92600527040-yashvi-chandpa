//wap roll number 5 subjects marks total percentage result & grade
#include<stdio.h>
#include<conio.h>
void main()
{
	int roll,m1,m2,m3,m4,m5,total;
	float per;
	clrscr();
	printf("enter roll number:");
	scanf("%d",&roll);
	printf("enter 5 subjects marks:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	per=total/5.0;
	printf("\n rollnumber=%d",roll);
	printf("\n total=%d",total);
	printf("\n percentage=%.2f",per);
	if(m1<35||m2<35||m3<35||m4<35||m5<35)
	{
		printf("\n result=fail");
	}
	else
	{
		printf("\n result=pass");
		if(per>=80)
			printf("\n grade=A");
		else if(per>=70)
			printf("\n grade=B");
		else if(per>=60)
			printf("\n grade=C");
		else if(per>=50)
			printf("\n grade=D");
		else
		printf("\n grade=E");
	}
	getch();
}