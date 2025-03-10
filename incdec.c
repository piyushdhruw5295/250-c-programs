#include<stdio.h>
int main()
{
    int m=20;
    int n,n1;
    n=m++;
    n1=m++;
    n--;
    n-=n1;
    printf("%d",n);
    return 0;
}