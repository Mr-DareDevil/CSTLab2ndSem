#include<stdio.h>


int main(){
	int n, arr[200];
	printf("Enter the value of n: ");
	
	scanf("%d", &n);
	printf("Enter the elements of array:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("The positive elements of array in reverse order removing duplicates: ");
	for(int i=n-1; i>=0; i--){
		if(arr[i]>=0 && arr[i]%2==0){
			int flag=0;
			for(int j=i+1; j<n; j++){
				if(arr[i]==arr[j]){
					flag=1;
					break;
				}
			}
			if(flag==0){
				printf("%d ", arr[i]);
			}
		}
	}
	return 0;
}
