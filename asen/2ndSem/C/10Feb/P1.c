//Find out the largest and smallest of n integers

#include<stdio.h>


int main(){

	int n;
	printf("Enter the number of integers: ");
	scanf("%d", &n);

	if(n<1){
		printf("Wrong Input!\n");
		return 0;
	}

	int maxValue, minValue;
	printf("Enter the numbers:- \n");
	scanf("%d", &maxValue);
	minValue = maxValue;
	for(int i=1; i<n; i++){
		int d;
		scanf("%d", &d);
		if(d<minValue) minValue = d;
		if(d>maxValue) maxValue = d;
	}

	printf("Largest value: %d\nSmallest value: %d\n", maxValue, minValue);

	return 0;
}
