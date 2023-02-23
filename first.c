#include<stdio.h>
#include<string.h>

int main(){
  char name[500];
  int i,j,length = 0;
  printf("Enter the name:\n");
  gets(name);
  //length = strlen(name);
  //printf("The length of string is :%d",strlen(name));
  for ( i = 0; name[i]!='\0'; i++)
  {
  length ++;
  }
  printf("The length of string is:%d",length);
  printf("\nAfter delecting repeated string we have:\n");
  
  for(i = 0;i<length;i++){
       for(j = i+1;j<=length;j++){
        if (name[j]==name[i]) 
        {
          name[j] = name[j+1];
          
        
        }
        
         
    }
    
    
      printf("%c",name[i]);
  }
  
return 0;
}
