// Printing reverse of a decimal integer number having at the most 3 digits

#include<stdio.h>
int main(){

	int a;
	printf("Enter a (decimal) integer number (of maximum 3 digits): ");
	scanf("%d", &a);
	if(a<-999 || a>999){
		printf(" Wrong input (input should be in between -999 to 999).\n");
		return 0;
	}

	int temp = a;
	if(a<0) a=-1*a;
	int rev=0;
	while(a){
		rev=rev*10+(a%10);
		a/=10;
	}
	if(temp<0) rev=-1*rev;
	printf("The reverse the number %d is %d.\n", temp, rev);
	return 0;
}
