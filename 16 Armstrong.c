#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, i, count = 0, armstrong = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    num = temp;
    while (num > 0)
    {
        i = num % 10;
        armstrong += pow(i, count);
        num /= 10;
    }
    if (temp == armstrong)
    {
        printf("%d is an Armstrong number.\n", temp);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", temp);
    }
    return 0;
}
