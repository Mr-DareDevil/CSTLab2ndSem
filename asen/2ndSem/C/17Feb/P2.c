#include<stdio.h>

int main(){
	int n, arr[200];
	printf("Enter the value of n: ");
	
	scanf("%d", &n);
	printf("Enter the elements of array:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("The positive elements of array in reverse order: ");
	for(int i=n-1; i>=0; i--){
		if(arr[i]>=0 && arr[i]%2==0)printf("%d ", arr[i]);
	}
	return 0;
}
