//  To check whether an integer is a factor of another integer      

#include<stdio.h>

int main(){

	int a, b;
	printf("Enter the 1st integer number:");
	scanf("%d", &a);
	printf("Enter the 2st integer number:");
	scanf("%d", &b);
	if(a%b==0){
		printf("%d is a factor of %d\n", b, a);

	}else{
		printf("%d is not a factor of %d\n", b, a);
	}

	return 0;
}



