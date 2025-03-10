#include<stdio.h>
struct Student
{
    char name[25];
    int age;
};
int main()
{
    struct Student s1={"Piyush",19};
    printf("Name: %s\n",s1.name);
    printf("Age:%d\n",s1.age);
    return 0;

}
