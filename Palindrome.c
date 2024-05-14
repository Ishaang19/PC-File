#include <stdio.h>
int main()
{
    int n, r = 0, t, d;
    printf("Enter a number\n");
    scanf("%d", &n);
    t = n;
    while (n != 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    if (r == t)
        printf("Yup\n");
    else
        printf("Nope\n");
    return 0;
}
