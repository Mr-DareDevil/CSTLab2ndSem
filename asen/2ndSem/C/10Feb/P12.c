//Printing a given pattern - 8

#include<stdio.h>

int main(){
	char c;
	printf("Enter a char: ");
	c=getchar();
	if(c>='Z') c-=('a'-'A');
	for(char i = 'A'; i<=c; i++){
		printf("%c", i);
	}
	for(char i=c-1; i>='A'; i--){
		printf("%c", i);
	}
	printf("\n");
	return 0;
}
