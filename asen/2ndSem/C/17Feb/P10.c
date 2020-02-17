#include<stdio.h>

int main(){
	int n;
	printf("Enter the number of integers: ");
	scanf("%d", &n);
	int div[100], divsize=0, cnt[100];
	for(int i=0; i<100; i++) cnt[i]=0;
	printf("Enter the integers: ");
	int d;
	scanf("%d", &d);
	for(int i=2; i<=d; i++){
		if(d%i==0){
			div[divsize]=i;
			cnt[divsize]++;
			divsize++;
		}
	}
	for(int i=1; i<n; i++){
		scanf("%d", &d);
		for(int j=0; j<divsize; j++){
			if(d%div[j]==0){
				cnt[j]++;
			}
		}
	}
	printf("The common factors are: ");
	for(int i=0; i<divsize; i++){
		
		if(cnt[i]==n){
			printf("%d ", div[i]);
		}
	}
	printf("\n");
	return 0;	
}

