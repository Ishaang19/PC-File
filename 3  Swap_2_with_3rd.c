#include <stdio.h>
void main()
{
    printf("-----Swap 2 numbers using a temporary variable-----\n");
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    c = a;
    a = b;
    b = c;
    printf("\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("By Ishaan Garg \n AIML-A\n");
}
