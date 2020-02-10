//To write a program to evaluate an expression having common subexpressions

#include<stdio.h>

int main(){

	int x, y;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);
	int z = 12*x*x*x + 17*y*y*y;
	int res = 19*z*z*z*z + 6*z*z*z + 14*z*z + 21*z + 11;
	printf("The result is : %d\n", res);

	return 0;
}
