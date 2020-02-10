//Computing percentage of marks scored in an examination having multiple papers
#include<stdio.h>

int main(){
	int m1, m2, m3, t1, t2, t3;
	printf("Enter total marks of paper 1: ");
	scanf("%d", &t1);
	printf("Enter marks obtained in paper 1: ");
	scanf("%d", &m1);
	
	printf("\nEnter total marks of paper 2: ");
        scanf("%d", &t2);
        printf("Enter marks obtained in paper 2: ");
        scanf("%d", &m2);


	printf("\nEnter total marks of paper 3: ");
        scanf("%d", &t3);
        printf("Enter marks obtained in paper 3: ");
        scanf("%d", &m3);
	
	if(m1<0 || m2<0 || m3<0 || t1<=0 || t2<=0 || t3<=0){
		printf("Wrong Input (Input must be positive whole numbers)\n");
		return 0;
	}
	float percent=(m1 + m2 + m3)*100.0/(t1+ t2+ t3);
	printf("\nPercentage of marks obtained: %.2f \n", percent);


	return 0;
}
