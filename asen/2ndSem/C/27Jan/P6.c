// Computing percentage of marks scored in an examination


#include<stdio.h>
int main(){
	int total, marks;
	float percent;
	printf("Enter the total marks: ");
	scanf("%d", &total);
	printf("Enter the marks obtained: ");
	scanf("%d", &marks);
	if(total<=0 || marks<0){
		printf("Wrong Input (Input must be positive whole numbers)\n");
		return 0;
	}
	percent=marks*100.0 / total;
	printf("Percentage of marks achieved: %.2f\n", percent);


	return 0;
}
