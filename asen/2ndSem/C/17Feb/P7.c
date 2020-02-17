#include<stdio.h>

int main(){

	char arr1[300], arr2[300];
	int size1=0, size2=0;
	printf("Enter the first sentence (end it with '.'): ");
	arr1[size1]=getchar();
	while(arr1[size1]!='.'){
		size1++;
		arr1[size1]=getchar();
	}
	getchar();
	printf("Enter the second sentence (end it with '.'): ");
	arr2[size2]=getchar();
	while(arr2[size2]!='.'){
		size2++;
		arr2[size2]=getchar();
	}
	int c1=0, c2=0;
	for(int i=0; i<=(size1+size2); i++){
		if(i%2==0){
			if(c1<=size1){
				printf("%c", arr1[c1]);
				c1++;
			}else{
				if(c2<=size2){
					printf("%c", arr2[c2]);
					c2++;
				}
			}
		}else{
			if(c2<=size2){
				printf("%c", arr2[c2]);
				c2++;
			}else{
				if(c1<=size1){
					printf("%c", arr1[c1]);
					c1++;
				}
			}
		}
	}
	printf("\n");
	return 0;
}
