//Compute x to the power n for given x and n

#include<stdio.h>

int main(){

	int x, n;
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("Enter value of n: ");
	scanf("%d", &n);
		
	if(x<0){
		printf("Wrong Input! Enter a positive value of x\n");
		return 0;
	}else if(n<0){
		printf("Wrong Input! Enter a positive value of n\n");
		return 0;
	}
	printf("%d raised to the power of %d gives: ", x, n);
	int res=1;
	for(int i=1; i<=n; i++){
		res*=x;
	}
	printf("%d\n", res);
	return 0;
}
