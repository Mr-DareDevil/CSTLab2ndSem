//Finding out the number of each vowel in the input text

#include<stdio.h>


int main(){

	int arr[5];
	for(int i=0; i<5; i++) arr[i]=0;
	char inp;
	printf("Enter the text: ");
	inp=getchar();

	if(inp=='a' || inp=='A') arr[0]++;
	else if(inp=='e' || inp=='E') arr[1]++;
	else if(inp=='i' || inp=='I') arr[2]++;
	else if(inp=='o' || inp=='O') arr[3]++;
	else if(inp=='u' || inp=='U') arr[4]++;
	while(inp!='.'){
		inp=getchar();
		if(inp=='a' || inp=='A') arr[0]++;
		else if(inp=='e' || inp=='E') arr[1]++;
		else if(inp=='i' || inp=='I') arr[2]++;
		else if(inp=='o' || inp=='O') arr[3]++;
		else if(inp=='u' || inp=='U') arr[4]++;
	}		
	printf("The number of a and A is %d.\n", arr[0]);
	printf("The number of e and E is %d.\n", arr[1]);
	printf("The number of i and I is %d.\n", arr[2]);
	printf("The number of o and O is %d.\n", arr[3]);
	printf("The number of u and U is %d.\n", arr[4]);
	return 0;
}
