#include <stdio.h>
int main()
{
    int m[5], i, tm = 500, om = 0;
    printf("Enter the marks of 5 subjects:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &m[i]);
        om += m[i];
    }
    float p = (om * 100) / tm;
    printf("Total percentage = %.2f%%\n", p);
    if (p >= 60)
    {
        printf("First Division\n");
    }
    else if (p >= 50 && p < 60)
    {
        printf("Second Division\n");
    }
    else if (p >= 40 && p < 50)
    {
        printf("Third Division\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}
