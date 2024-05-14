#include <stdio.h>
#include <math.h>
int main()
{
    printf("-----Simple and Compound Interest-----\n");
    float p, r;
    int t;
    printf("Enter principle: ");
    scanf("%f", &p);
    printf("Enter rate: ");
    scanf("%f", &r);
    printf("Enter time(in years): ");
    scanf("%d", &t);
    printf("\n");
    float si = (p * r * t) / 100;
    float ci = p * pow(1 + r / 100, t) - p;
    printf("Simple Interest is: %f\n", si);
    printf("Compound Interest is: %f\n", ci);
    printf("By Ishaan Garg \n AIML-A\n");
    return 0;
}
