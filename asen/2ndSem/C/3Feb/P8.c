//Computing sum of series 1 + 2 (x + 1) + 3 (x^2 + 3)... (upto n terms)

#include<stdio.h>

int main(){

	int x, n;
	printf("Enter a value of x: ");
	scanf("%d", &x);
	printf("Enter a value of n: ");
	scanf("%d", &n);

	int sum=1, odd=1, xterm=x;
	for(int i=2; i<=n; i++){
		sum+=i*(xterm+odd);
		odd+=2;
		xterm*=x;
	}

	printf("The result is: %d\n", sum);

	return 0;
}
