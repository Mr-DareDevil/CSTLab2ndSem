//Printing all the odd numbers between 0 and n

#include<stdio.h>

int main(){

	int n;
	printf("Enter a +ve integer: ");
	scanf("%d", &n);
	
	//Checking for wrong input
	if(n<0){
		printf("Wrong Input! Enter a +ve number\n");
		return 0;
	}
	printf("Odd numbers between %d and %d are: ", 0, n);

	//Starting from 1 and increementing by 2 to get all odd numbers
	for(int i=1; i<=n; i+=2){
		printf("%d ", i);
	}

	printf("\n");


	return 0;
}
