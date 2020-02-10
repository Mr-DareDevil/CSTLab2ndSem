//C programs involving multiple integer variables using scanf, printf, and assignment statements

#include<stdio.h>

int main(){

	int x, y;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);
	double res=(2*x*x*x + 4*x*x*y + 5*x*y*y + 12*y*y*y)*1.0/(x+y);
	printf("The result is : %f\n", res);

	return 0;
}

