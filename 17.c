#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("The greatest number is: %d\n", a);
    else if (b > a)
        printf("The greatest number is: %d\n", b);
    else
        printf("Both numbers are equal.\n");
    return 0;
}