// Merging digits of two numbers

#include<stdio.h>

int main(){

	int n1, n2;
	printf("Enter a number1: ");
	scanf("%d", &n1);
	printf("Enter a number2: ");
	scanf("%d", &n2);

	if (n1<0 || n2<0){
		printf("Wrong Input! Enter positive n1 and n2\n");
		return 0;
	}

	int dig1=0, dig2=0, t1=n1, t2=n2;
	//Finding the number of digits of n1
	while(t1){
		dig1++;
		t1/=10;
	}
	//Finding the number of digits of n2
	while(t2){
		dig2++;
		t2/=10;
	}
	printf("After merging result is: ");
	while(n1>0 || n2>0){
		//Getting the last digit of every number
		if(dig1){printf("%d", n1%10); dig1--;}
		if(dig2){printf("%d", n2%10); dig2--;}
		n1/=10;
		n2/=10;

	}
	printf("\n");	

	return 0;
}
