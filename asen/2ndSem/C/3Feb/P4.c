//Print the sum of the digits of a given integer

#include<stdio.h>

int main(){

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	//Storing the value of n in a temporary variable	
	int temp=n;	
	if(n<0){
		n*=-1;
	}
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	printf("Sum of digits of %d is: %d\n",temp,  sum);
	

	return 0;
}
