#include <stdio.h>
#include <conio.h>

void main() {
	int n, square, cube;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);

	square = n*n;
	cube = n*n*n;

	printf("square= %d\n", square);
	printf("cube=%d",cube);

	getch();
}