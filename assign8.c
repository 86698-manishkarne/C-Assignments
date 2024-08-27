#include <stdio.h>
typedef struct Student
{
    char rollno[20];
    char name[50];
    int mark;
} Student;
Student accept_info(Student s)
{

    printf("Enter Roll Number : ");
    scanf("%s", &s.rollno);

    printf("Enter Name : ");
    scanf("%s", &s.name);

    printf("Enter Marks : ");
    scanf("%d", &s.mark);

    return s;
}
void display_info(Student s)
{
    printf("\nName : %s", s.rollno);
    printf("\nRoll Number : %s", s.name);
    printf("\nMarks :: %d", s.mark);
}
int main()
{
    Student s, s1;

    s1 = accept_info(s);
    display_info(s1);

    return 0;
}