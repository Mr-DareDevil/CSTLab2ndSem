#include<stdio.h>


int main(){
	int cnt[26];
	for(int i=0; i<26; i++) cnt[i]=0;
	printf("Enter a sentence (end it with '.'): ");
	int size=0;
	char c = getchar();
	if(c>='a' && c<='z'){
		cnt[(int)(c-'a')]++;
	}else{
		cnt[(int)(c-'A')]++;
	}
	while(c!='.'){
		size++;
		c=getchar();
		if(c>='a' && c<='z'){
			cnt[(int)(c-'a')]++;
		}else{
			cnt[(int)(c-'A')]++;
		}
	}

	printf("The counf of english letters: \n");
	for(int i=0; i<26; i++){
		printf("%c = %d\n", 'A'+i, cnt[i]);
	}

	
	return 0;
}

