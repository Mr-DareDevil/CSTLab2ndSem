// Computing grade point obtained in an examination.

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

	if(percent>=90.00)
		printf("GRADE: Outstanding\nGRADE POINT: 10\n");
	else if(percent>=80.00)
	        printf("GRADE: Exceptional\nGRADE POINT: 9\n");
	else if(percent>=70.00)
		 printf("GRADE: A\nGRADE POINT: 8\n");
	else if(percent>=60.00)
		 printf("GRADE: B\nGRADE POINT: 7\n");
	else if(percent>=50.00)
		 printf("GRADE: C\nGRADE POINT: 6\n");
	else if(percent>=40.00)
		 printf("GRADE: D\nGRADE POINT: 5\n");
	else
		 printf("GRADE: F\nGRADE POINT: 0\n");


	return 0;
}
