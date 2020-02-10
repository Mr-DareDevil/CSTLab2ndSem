// Printing 3 integer numbers in ascending order


#include<stdio.h>


int main(){

	int a, b, c;
	printf("Enter the 1st integer number: ");
	scanf("%d", &a);
	printf("Enter the 2st integer number: ");
        scanf("%d", &b);
	printf("Enter the 3st integer number: ");
        scanf("%d", &c);
	int n1, n2, n3;
	
	if(a<b && a<c){
		n1=a;
		if(b<c){
			n2=b;
			n3=c;
		}else{
			n2=c;
			n3=b;
		}
	}else if(b<a && b<c){
                n1=b;
                if(a<c){
                        n2=a;
                        n3=c;
                }else{
                        n2=c;
                        n3=a;
                }

	}else if(c<a && c<b){
                n1=c;
                if(a<b){
                        n2=a;
                        n3=b;
                }else{
                        n2=b;
                        n3=a;
                }

        }



	printf("The numbers in ascending order are: %d %d %d .\n", n1, n2, n3);

	return 0;
}

