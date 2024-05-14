#include <stdio.h>
int main()
{
    int num, sum = 0, i;
    printf("Enter n: ");
    scanf("%d", &num);
    while (num > 0)
    {
        i = num % 10;
        sum += i;
        num = num / 10;
    }
    printf("Sum: %d\n", sum);
    return 0;
}
