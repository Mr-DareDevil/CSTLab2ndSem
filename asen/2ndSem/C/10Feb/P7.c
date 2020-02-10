//Printing a given pattern - 3


#include<stdio.h>

int main(){
	char c;
	printf("Enter the character: ");
	c=getchar();
	int m, n;
	printf("Enter the value of m: ");
	scanf("%d", &m);
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++) printf("%c", c);
	printf("\n");
	for(int i=0; i<m-2; i++){
		printf("%c", c);
		for(int i=0; i<n-2; i++) printf(" ");
		printf("%c\n", c);
	}
	for(int i=0; i<n; i++) printf("%c", c);

	return 0;
}
