#include <stdio.h>
struct course
{
    char coursename[50];
    int coursecode;
    float grade;
};
struct student
{
    int studentId;
    char studentName[50];
    int age;
    struct course courses[3];
};
void display(struct student s){
    printf("\nstudent information is:\n");
    printf("student id is: %d \n",s.studentId);
    printf("student Name is: %s \n",s.studentName);
    printf("student age is: %d \n",s.age);
    printf("\n courses and Grades is:\n");
    for(int i=0;i<3;i++){
        printf("courseName is:%s\n",s.courses[i].coursename);
         printf("course code is:%d\n",s.courses[i].coursecode);
          printf("Grade  is:%.2f\n",s.courses[i].grade);
    }
}
int main()
{
    struct student s1;
    strcpy(s1.studentName, "Raj sharma");
    s1.age = 23;
    s1.studentId = 101;
    // s1.courses={
    //     {"math",201,89.78},
    //     {"chemistry",202,85.80},
    //     {"computerScience",203,81.78}

    // }

    //so this is the right way to do it.
    strcpy(s1.courses[0].coursename,"Math");
    s1.courses[0].coursecode=201;
    s1.courses[0].grade=81.78;
    strcpy(s1.courses[1].coursename,"Chemistry");
    s1.courses[1].coursecode=202;
    s1.courses[1].grade=86.85;
    strcpy(s1.courses[2].coursename,"computerScience");
    s1.courses[2].coursecode=203;
    s1.courses[2].grade=89.50;
    display(s1);

    
}