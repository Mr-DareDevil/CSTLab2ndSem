//Check whether an integer reads same from both the ends (palindrome) or not

#include<stdio.h>

int main(){

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n<0){
		printf("Wrong Input! Enter positive n\n");
		return 0;
	}
	int reverse=0, temp=n;
	//Finding the reverse of the same number
	while(temp){
		reverse=reverse*10 + temp%10;
		temp/=10;
	}
	
	if(reverse==n){
		printf("%d is a palindrome number\n", n);
	}else{
		printf("%d is not a palindrome number\n", n);
	}

	return 0;
}
