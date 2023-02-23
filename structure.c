#include<stdio.h>
#include<string.h>
//Structure declaration
struct  Student
{
    char stud_name[225];
    int stud_id;
    int stud_phone;
    char stud_course[225];
};

int main(){
    //Object structure declaration
    struct  Student S; 
   printf("Enter student name:\n");
   gets(S.stud_name);
   printf("Enter studenrt id:\n");
   fflush(stdin);
   scanf("%d",&S.stud_id);
    printf("Enter student phone number:\n");
      fflush(stdin);
    scanf("%d",&S.stud_phone);
    printf("Enter student course:\n");
    fflush(stdin);
    gets(S.stud_course);
    printf("______________________________________________________________________________\n");
    printf("The student data are:\n"); 
    printf("Stud_Name\t\tStud_Id\t\tStud_Phone\t\t\tStud_Course\n"); 
    printf("%s\t\t\t%d\t\t%d\t%s",S.stud_name,S.stud_id,S.stud_phone,S.stud_course);  

    return 0;
}                                                                              
