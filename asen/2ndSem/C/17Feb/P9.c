#include<stdio.h>

int main(){

	char arr[300];
	int size=0, choice, place=0;
	printf("Enter the sentence (end it with '.'): ");
	arr[size]=getchar();
	while(arr[size]!='.'){
		size++;
		arr[size]=getchar();
	}
	printf("Rotate left or right? (1 for left, 2 for right):  ");
	scanf("%d", &choice);
	printf("To rotate by how many places? ");
	scanf("%d", &place);
	printf("The rotated sentence is: ");
	if(choice==1){
		for(int i=place; i<=size; i++){
			printf("%c", arr[i]);
		}
		for(int i=0; i<place; i++){
			printf("%c", arr[i]);
		}
	}else{
		for(int i=size-place+1; i<=size; i++){
			printf("%c", arr[i]);
		}
		for(int i=0; i<=size-place; i++){
			printf("%c", arr[i]);
		}
	}
	printf("\n");
	return 0;
}
