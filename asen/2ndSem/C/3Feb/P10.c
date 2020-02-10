//Computing sum of another series involving two variables

#include<stdio.h>

int main(){

	int x1, x2, n;
	printf("Enter a value of x1: ");
	scanf("%d", &x1);
	printf("Enter a value of x2: ");
	scanf("%d", &x2);
	printf("Enter a value of n: ");
	scanf("%d", &n);

	int sum=0;
	int c=2, p=x1, q=x2;

	for(int i=1; i<=n; i++){
		sum+=c*(p+q);
		if(c==2) c=-3;
		else c=2;
		p*=x1;
		q*=x2;
		q*=x2;
		q*=-1;
	}

	printf("The result is: %d\n", sum);

	return 0;
}
