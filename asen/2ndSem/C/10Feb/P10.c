//Printing a given pattern - 6

#include<stdio.h>

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("%c", 'A'+i-1);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
