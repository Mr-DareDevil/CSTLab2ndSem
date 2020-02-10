//Print the digits of a given integer

#include<stdio.h>

int main(){
	int n;
	printf("Enter a positive integer: ");
	scanf("%d", &n);

	if(n<0){
		printf("Wrong Input! Enter a positive number");
		return 0;
	}

	printf("Individual digits of %d are:\n", n);
	int dig=0, temp=n;
	while(temp){
		dig++;
		temp/=10;
	}

	int val=1;
	for(int i=1; i<dig; i++) val*=10;
	while(val){
		printf("%d\n", n/val);
		n%=val;
		val/=10;
	}
	return 0;
}
