// Find the the sum of digits of a 3-digit (decimal) integer number

#include<stdio.h>

int main(){
	int a;
	printf("Enter a 3-digit (decimal) integer number: ");
	scanf("%d", &a);
	int temp=a;
	if(a<0) a=-1*a;
	if(a>999 || a<100) {
		printf("Wrong input (input should be in between 100 to 999 or -999 to -100).\n");
		return 0;

	}

	int sum=0;
	while(a){
		sum+=a%10;
		a/=10;
	}

	printf("The sum of the digits of the number %d is %d .\n", temp, sum);
	
	return 0;
}
