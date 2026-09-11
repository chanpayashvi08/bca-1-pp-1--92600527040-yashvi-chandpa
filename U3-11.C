//wap input one character from user to find out that character is vowel or not
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter a character:");
	scanf("%c",&ch);
	if(ch=='e'|| ch=='a' || ch=='i' || ch=='o' || ch=='u'|| ch=='E'|| ch=='A' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("this character is vowel");
	}
	else
	{
		printf("this character is not vowel");
	}
	getch();
}
