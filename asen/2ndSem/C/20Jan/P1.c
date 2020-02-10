//To write a simple program involving an integer variable

#include<stdio.h>


int main(){
	int x = 3;
	int val1 = 19 + 4*x + 3*x*x + 9*x*x*x + 8*x*x*x*x;
	printf("x = 3 => %d\n", val1);
	x=16;
	int val2 = 19 + 4*x + 3*x*x + 9*x*x*x + 8*x*x*x*x;
	printf("x = 16 => %d\n", val2);

	return 0;
}


