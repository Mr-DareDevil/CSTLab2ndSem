//Printing a given pattern - 10

#include<stdio.h>

int main(){
	int n;
	printf("Enter the number of lines: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++) printf("  ");
		int k=i;
		for(int l=1; l<=i; l++){
			printf("%d ", k);
			k++;
		}
		k-=2;
		for(int l=2; l<=i; l++){
			printf("%d ", k);
			k--;
		}
		printf("\n");
	}
	return 0;
}
