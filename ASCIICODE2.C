//wap which display of one character and display its ASCII code
 #include<stdio.h>
 #include<conio.h>
 void main()
{
	char x;
	clrscr();
	printf("\n enter any character:");
	scanf("%c",&x); // a=97
	printf("\n input character is: %c",x-32);
	printf("\n ASCII code is :%d",x-32);
	getch();
}