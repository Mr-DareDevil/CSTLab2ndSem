#include<stdio.h>

int main(){

        char arr[300], res[300];
        int size=0;
        printf("Enter the sentence (end it with '.'): ");
        arr[size]=getchar();
        while(arr[size]!='.'){
                size++;
                arr[size]=getchar();
        }
        int size2=0;
        for(int i=0; i<=size; i++){
                if(arr[i]==10 || arr[i]==9 || arr[i]==' '){
                        res[size2]=' ';
                        size2++;
                        while((arr[i]==10 || arr[i]==9 || arr[i]==' ') && i<=size) i++;
                        i--;
                }else if(arr[i]!=' '){
                        res[size2]=arr[i];
                        size2++;
                }
        }

        for(int i=0; i<=size2; i++){
                printf("%c", res[i]);
        }
        printf("\n");
        return 0;
}

