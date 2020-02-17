#include<stdio.h>


int main(){
	char arr[500];
	printf("Enter a sentence (end it with '.'): ");
	int size=0;
	arr[size]=getchar();
	while(arr[size]!='.'){
		size++;
		arr[size]=getchar();
	}

	int n;
	printf("How many times the sentence should be printed?: ");
	scanf("%d", &n);
	while(n--){
		for(int i=0; i<size; i++){
			printf("%c", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
