//To write a program to evaluate a given expression for given values of variables

#include<stdio.h>

int main(){

	int x, y;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);
	int res=18*y*y*y*y - 4*x*y*y*y + 15*x*x*y*y - 5*x*x*x*y + 17*x*x*x*x;
	printf("The result is : %d\n", res);

	return 0;
}






