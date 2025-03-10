#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    void (*printDetails)(struct Student *);
};
void displayStudent(struct Student *s) 
{
    printf("Roll Number: %d\n", s->roll);
    printf("Name: %s\n", s->name);
}
int main() {
    struct Student students[5] = {
        {164, "Piyush", displayStudent},
        {168, "Prakash", displayStudent},
        {147, "Naman", displayStudent},
        {149, "Navneet", displayStudent},
        {132, "Ashhar", displayStudent},
    };
    void (*funcPtrs[5])(struct Student *) = {displayStudent, displayStudent, displayStudent, displayStudent, displayStudent};
    for (int i = 0; i < 5; i++) {
        funcPtrs[i](&students[i]);
    }
    
    return 0;
}
