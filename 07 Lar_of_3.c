#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    (a > b && a > c)   ? printf("Largest no among these is %d", a)
    : (b > a && b > c) ? printf("Largest no among these is %d", b)
                       : printf("Largest no among these is %d", c);
    return 0;
}
