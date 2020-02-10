//Printing a given pattern - 5

#include<stdio.h>

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			printf(" ");
		}
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
