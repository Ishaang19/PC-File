#include <stdio.h>
#include <math.h>
int fac(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int x, sum = 1;
    printf("Enter x: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        sum += (pow(x, i)) / fac(i);
    }
    printf("Sum: %d", sum);
    return 0;
}
