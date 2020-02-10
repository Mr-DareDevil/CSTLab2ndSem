//Printing a given pattern - 1


#include<stdio.h>

int main(){

	int m, n;
	printf("Enter the value of m: ");
	scanf("%d", &m);
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
