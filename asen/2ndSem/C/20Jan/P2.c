//To write a simple program involving an integer variable whose value is taken from the user

#include<stdio.h>

int main(){
	int x;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	int val = 139 + 14*x + 5*x*x + 11*x*x*x + 17*x*x*x*x + 7*x*x*x*x*x;
	printf("The result is: %d\n", val);

	return 0;
}


