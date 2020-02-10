//Printing a given pattern - 9

#include<stdio.h>

int main(){
	char c;
	printf("Enter a char: ");
	c=getchar();
	if(c>='Z') c-=('a'-'A');
	for(char j='A'; j<=c; j++){
		for(char i = 'A'; i<=j; i++){
			printf("%c", i);
		}
		for(char i=j-1; i>='A'; i--){
			printf("%c", i);
		}
		printf("\n");
	}
	return 0;
}
