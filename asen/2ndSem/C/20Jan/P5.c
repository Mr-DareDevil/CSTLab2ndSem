//To write a program to compute the quotient and remainder when an expression is divided by another expression

#include<stdio.h>

int main(){

	int x, y;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);

	int e1 = 14*(2*x*x + 5*x*y + 9*y*y);
	int e2 = 13*x*x*x + 7*y*y*y;

	int res = e1%e2;

	printf("The result is : %d\n", res);

	return 0;
}
