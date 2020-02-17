#include<stdio.h>


int main(){
	int cnt_upper[26], cnt_lower[26];
	for(int i=0; i<26; i++) {
		cnt_upper[i]=0; 
		cnt_lower[i]=0;
	}
	printf("Enter a sentence (end it with '.'): ");
	int size=0;
	char c = getchar();
	if(c>='a' && c<='z'){
		cnt_lower[(int)(c-'a')]++;
	}else{
		cnt_upper[(int)(c-'A')]++;
	}
	while(c!='.'){
		size++;
		c=getchar();
		if(c>='a' && c<='z'){
			cnt_lower[(int)(c-'a')]++;
		}else{
			cnt_upper[(int)(c-'A')]++;
		}
	}

	printf("The counf of lower english letters: \n");
	for(int i=0; i<26; i++){
		printf("%c = %d\n", 'a'+i, cnt_lower[i]);
	}
	printf("The counf of upper english letters: \n");
	for(int i=0; i<26; i++){
		printf("%c = %d\n", 'A'+i, cnt_upper[i]);
	}
	
	return 0;
}

