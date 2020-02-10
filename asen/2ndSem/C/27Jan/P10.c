//Computing cumulative grade point average (CGPA) in a semester based system

#include<stdio.h>

int gradePoint(int t, int m){
	float p=m*100.0/m;
	if(p>=90.00)
			return 10;
		else if(p>=80.00)
		    return 9;
		else if(p>=70.00)
			 return 8;
		else if(p>=60.00)
			 return 7;
		else if(p>=50.00)
			 return 6;
		else if(p>=40.00)
			 return 5;
		else
			 return 0;

}

int main(){
	int m1, m2, m3, t1, t2, t3, g1, g2, g3, c1, c2, c3;
	float prev_cgpa, prev_credits;
	printf("Enter the previous semester CGPA: ");
	scanf("%f", &prev_cgpa);
	printf("Enter the total credits so far: ");
	scanf("%f", &prev_credits);
	printf("Enter total marks of paper 1: ");
	scanf("%d", &t1);
	printf("Enter marks obtained in paper 1: ");
	scanf("%d", &m1);
	printf("Enter credit of paper 1: ");
	scanf("%d", &c1);
	
	printf("\nEnter total marks of paper 2: ");
    scanf("%d", &t2);
    printf("Enter marks obtained in paper 2: ");
    scanf("%d", &m2);
    printf("Enter credit of paper 2: ");
	scanf("%d", &c2);

	printf("\nEnter total marks of paper 3: ");
    scanf("%d", &t3);
    printf("Enter marks obtained in paper 3: ");
    scanf("%d", &m3);
	printf("Enter credit of paper 3: ");
	scanf("%d", &c3);

	if(prev_cgpa<0 || prev_credits<0 || m1<0 || m2<0 || m3<0 || t1<=0 || t2<=0 || t3<=0 || c1<0 || c2<0 || c3<0){
		printf("Wrong Input (Input must be positive whole numbers)\n");
		return 0;
	}
	
	g1=gradePoint(t1, m1);
	g2=gradePoint(t2, m2);
	g3=gradePoint(t3, m3);
	float cur_cgpa = (c1*g1 + c2*g2 + c3*g3)*1.0/(c1+c3+c3);
	
	float final_cgpa = (prev_cgpa * prev_credits + cur_cgpa *(c1+c2+c3))*1.0/(prev_credits + c1+c2+c3);

	printf("\n\nCGPA: %.4f \n", final_cgpa);

	return 0;
}

