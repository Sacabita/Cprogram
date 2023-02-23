#include<stdio.h>
#include<string.h>

int main(){
    char  words[500];
    int i,j,length = 0;
    int number = 1; 
    printf("Enter some words:\n");

    gets(words);
    for(i=0;words[i]!='\0';i++){
        length++;
    }
        printf("The length of my string is:%d",length);

        for(i = 0;i<length;i++){

            if(words[i] == ' '){
                number ++;

            }
        }
    

                printf("\nThe number of words of paragraph is:%d",number);




    return 0;
}