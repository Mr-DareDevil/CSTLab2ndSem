//Finding sum of all the factors of a +ve integer

#include<stdio.h>

int main(){

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
		
	if(n<0){
		printf("Wrong Input! Enter a positive number");
		return 0;
	}
	int sum=0;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){   //Checking if it is a factor 
			sum+=i;
			if(n/i != i){
				sum+=(n/i);
			}
		}
	}
	printf("Sum of all factors of %d is: %d\n",n, sum);

	return 0;
}
