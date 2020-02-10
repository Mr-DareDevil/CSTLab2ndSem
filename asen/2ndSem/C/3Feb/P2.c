//Printing all the even numbers between two numbers n1 and n2

#include<stdio.h>

int main(){

	int n1, n2;
	printf("Enter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2: ");
	scanf("%d", &n2);
	
	//Swapping numbers so that n1 is less than n2
	if(n1>n2){
		int temp=n1;
		n1=n2;
		n2=temp;
	}
	printf("All even numbers between %d and %d are: ", n1, n2);
	for(int i=n1+1; i<n2; i++){
		if(i%2==0) printf("%d ", i);
	}

	printf("\n");

	return 0;
}
