#include <stdio.h>
int main()
{
    printf("-----Arithmetic Calculator-----\n");
    float N1, N2;
    printf("Enter first number: ");
    scanf("%f", &N1);
    printf("Enter second number: ");
    scanf("%f", &N2);
    printf("\n");
    printf("The sum of the two numbers is: %f\n", N1 + N2);
    printf("The difference of the two numbers is: %f\n", N1 - N2);
    printf("The product of the two numbers is: %f\n", N1 * N2);
    printf("The quotient of the two numbers is: %f\n", N1 / N2);
    printf("By Ishaan Garg \n AIML-A\n");
    return 0;
}