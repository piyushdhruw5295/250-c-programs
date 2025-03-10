#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int rollno;
    char name[20];
    struct Student *next;
};
int main()
{
    struct Student *head = NULL;
    struct Student *temp = NULL;
    struct Student *p = NULL;
    int n;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        temp = (struct Student *)malloc(sizeof(struct Student));
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &temp->rollno);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", temp->name);
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            p = temp;
        }
        else
        {
            p->next = temp;
            p = temp;
        }
    }
    p = head;
    while(p != NULL)
    {
        printf("Roll number: %d\n", p->rollno);
        printf("Name: %s\n", p->name);
        p = p->next;
    }
    return 0;
}

