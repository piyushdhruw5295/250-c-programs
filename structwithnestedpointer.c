#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int roll;
    char name[20];
    struct Address *address;
};
struct Address
{   
    char street[20];
    char city[20];
    struct Country *country;
};
struct Country
{
    char name[20];
    int code;
};
int main()
{
    struct Country c = {"India", 91};
    struct Address a = {"Mana Camp", "Raipur", &c};
    struct Student s = {164, "Piyush", &a};
    struct Student *p = &s;

    printf("Roll: %d\n", p->roll);
    printf("Name: %s\n", p->name);
    printf("Street: %s\n", p->address->street);
    printf("City: %s\n", p->address->city);
    printf("Country: %s\n", p->address->country->name);
    printf("Code: %d\n", p->address->country->code);
    return 0;
}