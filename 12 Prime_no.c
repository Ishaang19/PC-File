#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter the value of num: ");
    scanf("%d", &num);
    printf("Prime numbers up to %d:\n", num);
    for (i = 2; i <= num; i++)
    {
        int isPrime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
