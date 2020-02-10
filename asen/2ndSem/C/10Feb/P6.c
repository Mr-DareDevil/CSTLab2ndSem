//Printing a given pattern - 2


#include<stdio.h>

int main(){

	int m, n;
	printf("Enter the value of m: ");
	scanf("%d", &m);
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++) printf("*");
	printf("\n");
	for(int i=0; i<m-2; i++){
		printf("*");
		for(int i=0; i<n-2; i++) printf(" ");
		printf("*\n");
	}
	for(int i=0; i<n; i++) printf("*");

	return 0;
}
