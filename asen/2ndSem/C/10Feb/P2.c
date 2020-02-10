//Find out the largest and smallest of some integer numbers

#include<stdio.h>


int main(){

	int d;
	printf("Enter the integer data: ");
	scanf("%d", &d);
	int minValue = d, maxValue = d;
	while(1){
		printf("Do you want to enter another integer (y/n)?");
		char c;
		c=getchar();
		c=getchar();
		if(c=='n' || c== 'N') break;
		printf("Enter the integer data: ");
		scanf("%d", &d);
		if(d<minValue) minValue = d;
		if(d>maxValue) maxValue = d;
	}

	printf("The largest and smallest of the numbers are %d and %d respectively.\n", maxValue, minValue);
	return 0;
}
