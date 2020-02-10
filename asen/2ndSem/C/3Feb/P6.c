//Finding all the odd factors of a +ve integer

#include<stdio.h>


int main(){

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
		
	if(n<0){
		printf("Wrong Input! Enter a positive number");
		return 0;
	}
	printf("The odd factors of %d are: ", n);
	for(int i=1; i<=n; i++){
		if(n%i==0){         // Checking of i is a factor
			if(i%2==1){ //Checking if the factor is odd
				printf("%d ", i);
			}
		}
	}
	
	printf("\n");

	return 0;
}
