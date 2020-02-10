// Find the the sum of digits of a 3-digit +ve (decimal) integer number

#include<stdio.h>

int main(){
	int a;
	printf("Enter a 3-digit +ve (decimal) integer number: ");
	scanf("%d", &a);
	if(a>999 || a<100) {
		printf("Wrong input (input should be in between 100 to 999).\n");
		return 0;
	}

	int sum=0, temp=a;
	while(a){
		sum+=a%10;
		a/=10;
	}

	printf("The sum of the digits of the number %d is %d .\n", temp, sum);
	
	return 0;
}
