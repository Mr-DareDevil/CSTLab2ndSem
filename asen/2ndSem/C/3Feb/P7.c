//Computing sum of series 1 + 2 (x + 1) + 3 (x + 3)... (upto n terms)

#include<stdio.h>

int main(){

	int x, n;
	printf("Enter a value of x: ");
	scanf("%d", &x);
	printf("Enter a value of n: ");
	scanf("%d", &n);

	int sum=1, term=x+1;
	for(int i=2; i<=n; i++){
		sum+=i*term;
		term+=2;
	}

	printf("The result is: %d\n", sum);

	return 0;
}
