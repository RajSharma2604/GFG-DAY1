#include<stdio.h>
//creating a structure
struct student{
    char name[50];
    int age;
    int class;
    float height;
};
int main()
{   //now creating a object for a structure
    struct student s1;

    //s1.name="raj sharma"
    //will give an error cause in an array we cant directly assign a value
    //so the solution will be either we can take input from user
    printf("Enter name:\n");
    scanf("%s",s1.name);

    //other approoach is we can use strcpy() method 
    //in strcpy(x,y)->where x is a destination and y is source
    // so it will be 
    //strcpy(s1.name,"raj sharma");
    s1.age=23;
    s1.class=12;
    s1.height=5.8;

    printf("student name is %s\n:",s1.name);
    printf("student age is %d\n:",s1.age);
    printf("student height is %.2f\n:",s1.height);
    printf("student class is %d\n:",s1.class);


}